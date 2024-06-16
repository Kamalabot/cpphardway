#include "exercise24.h"
#include <string>
#include <iostream>
#include <istream>
#include <unordered_map>

using namespace std;

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