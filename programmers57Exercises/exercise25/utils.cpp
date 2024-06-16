#include "utils.h"
#include <string>
#include <cctype>

using std::string;

bool checker_alpha(string password){
    bool onlyString = true;
    for(int i = 0; i < password.length(); i++){
        if(!isalpha(password[i])){
            // enters if there is a number / digit
            onlyString = false;
        }
    }
    return onlyString;
}

bool checker_num(string password){
    bool onlyNum= true;
    for(int i = 0; i < password.length(); i++){
        if(!isdigit(password[i])){
            // enters if there is a number / digit
            onlyNum= false;
        }
    }
    return onlyNum;
}

bool checker_mix(string password){
    bool hasNum = false;
    for(int i = 0; i < password.length(); i++){
        if(isdigit(password[i])){
            hasNum = true;
        }
    }
    return hasNum;
}

bool checker_spl(string password){
    bool hasNum = false;
    bool hasSpl= false;
    string specialCharacters = "!@#$%^&*()-+";
    for(int i = 0; i < password.length(); i++){
        if(isdigit(password[i])){
            hasNum = true;
        }
        if(specialCharacters.find(password[i]) != string::npos){
            hasSpl = true;
        }
    }
    return hasNum && hasNum;
}