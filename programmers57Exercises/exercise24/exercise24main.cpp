#include <iostream>
#include <istream>
#include <string>
#include <unordered_map>
// #include "exercise24.h"

using namespace std;

void isPalin(string word1, string word2);
bool isAnagram(string word1, string word2);


int main(int argc, char **argv){
    string word1, word2;
    cout << "Enter two strings and I will tell if they are anagrams" << endl;

    cout << "Enter the first word: ";
    getline(cin, word1); 

    cout << "Enter the second word: ";
    getline(cin, word2); 

    if (isAnagram(word1, word2)){
        cout << "The words are anagram." << endl;
    } else {
        cout << "The words are not anagrams" << endl;
    };

    return 0;
}

void isPalin(string word1, string word2){
    int strlen1 = word1.length();
    int strlen2 = word2.length();

    bool status = true; // assume the words are anagrams

    if (strlen1 != strlen2){
        status = false;
    } else {
        for(int i = 0; i < strlen1; i++){
            if(word1[i] != word2[i]){
                status = false;
                break;
            } 
        }
    }
    if (status){
        cout << "The " << word1 << " and " << word2 << " are anagrams" << endl;
    } else {
        cout << "Words are not anagrams";
    }
}

bool isAnagram(string word1, string word2){
    int strlen1 = word1.length();
    int strlen2 = word2.length();

    bool status = true;
    if(strlen1 != strlen2)
        return false;

    unordered_map<char, int> lcf1;
    unordered_map<char, int> lcf2;

    for(char c: word1){
        lcf1[c]++;
    }

    for(char c: word2){
        lcf2[c]++;
    }

    cout << "size of lcf1: " << lcf1.size() << endl;
    cout << "size of lcf2: " << lcf2.size() << endl;

    for(auto it: lcf1){
        cout << it.first << " " << it.second << endl; 
    }

    for(auto it: lcf2){
        cout << it.first << " " << it.second << endl; 
    }

    for(char c: word1){
        if(lcf1[c] != lcf2[c]){
            return false;
        }
    }
    return true;

}