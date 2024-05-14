// code for the quiz with multiple questions, that have multiple choices

#include <iostream>
#include <string>
#include <istream>

using std::cin;
using std::cout;
using std::string;
using std::getline;

int main(){
    string questions[] = {"1. Which year C++ was created?",
                          "2. Who invented C++?",
                          "3. What is predecessor of C++?",
                          "4. Is Earth Flat?"};
    string answers[][4] ={{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                        {"A. Rossum", "B. Bjarne", "C. Voxel", "D. Cena"},
                        {"A. C", "B. A", "C. Java", "D. Python"},
                        {"A. Yes", "B. no", "C. sometime", "D. really"}};
    int yourScore = 0;
    // string answerkey[] = {"1. C", "2. B", "3. A", "4. B"}
    char answerkey[] = {'C', 'B', 'A', 'B'};  // answers' index, is already present
    cout << "*****************\n";
    cout << "*** Quiz Game ***\n";
    cout << "*****************\n";

    int qsize = sizeof(questions) / sizeof(questions[0]);
    for(int q = 0; q < qsize; q++){
        cout << "Question: " << questions[q] << "\n";
        cout << "Your Choices are: \n";
        for(int a = 0; a < qsize; a++){
            cout << answers[q][a] << "\n"; 
        }
        char answer;
        cout << "Your Answer is: "; 
        cin >> answer;
        // ensure the types of both comparators needs to be checked
        if (answer == answerkey[q]){
            yourScore += 1;
        }
    }
    cout << "How well did you do?\n";
    double finalscore = yourScore * 100 / (double)qsize;
    cout << "You got " << finalscore << "% of answers correct";
}