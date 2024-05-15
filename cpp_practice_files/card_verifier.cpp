// Code implementing the card verifier algorithm in CPP
/* Luhn Verification Algorithm:
1. Double every second digit from right to left
    1a. If the result is a double digit then split them
2. Add all single digits from step 1
3. Add all odd numbered digits from right to left
4. Sum result from steps 2 & 3
5. If step 4 is divisible by 10, then number is valid*/
#include <iostream>
#include <istream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

bool isValid(string cardnum);
int getDigit(char num);

int main(){
    string card = "6011000901399424";
    // string card = "6012000901399424";
    // cout << "provide the card number ";
    // cin >> card;

    cout << "Card you have provided is: " << card << endl;
    string cardValidity = (isValid(card)) ? "Ouch its InValid":"Hooray Is Valid" ;
    cout << "The card is: " << cardValidity << endl;
    // cout << getDigit('9') << endl;
    // cout << getDigit('0') << endl;
}

int getDigit(char num){
    return num - 48; 
    // num will be converted to ascii character value
}

bool isValid(string cardNum){
    int charlen = cardNum.size();
    cout << charlen << endl;

    int step1 = 0;
    for(int i = charlen; i >=0; i--){
        // cout << (int)cardNum[i] << endl;
        // getting every 2nd digit
        if (i % 2 == 0) {
            // doubling it
            int dbldgt = getDigit(cardNum[i]) * 2;
            if (dbldgt > 9){
                // if pdt is more than 10, the split into 10s and 1s
                int tens = dbldgt / 10;
                int ones = dbldgt % 10;
                // add each digit to step1
                step1 += tens;
                step1 += ones;
            }
            else{
                // if less than 10, then add to step1
                step1 += dbldgt;
            }
        }
    }

    int step3 = 0; // There is no step2 as it is part of step1
    for(int i = charlen; i >= 0; i--){
        if(i % 2 != 0){
            step3 += getDigit(cardNum[i]);
        }
    }
    int step4 = step1 + step3; // add results of step1 and step3
    if (step4 % 10 == 0){ // check if it is divisible by 10
        return true; // if yes then return true
    }
    return false; // else return false
}