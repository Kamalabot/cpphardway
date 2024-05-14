#include <iostream>

void walk(int steps);
void recwalk(int steps);
void walkfwd(int steps);

int main(){
    // walk(10);
    // recwalk(10);
    walkfwd(1);
    return 0;
}

void walk(int steps){
    for(int i = 0; i < steps; i++){
        std::cout << "You take a step: " << i << "\n";
    }
}

void recwalk(int steps){
    // The walk will happen backwards from 10
    if (steps > 0){
        std::cout << "You take a step" << steps << "\n";
    } 
    recwalk(steps - 1);
}

void walkfwd(int steps){
    // The walk will happen backwards from 10
    if (steps < 10){
        std::cout << "You take a step " << steps << "\n";
        walkfwd(steps + 1);
    } 
}