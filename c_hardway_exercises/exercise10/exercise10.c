
#include <stdio.h>

int main(int argc, char *argv[]){
    int i = 0;

    for(i = 0; i < argc; i++){
        printf("Arg %d is %s \n",i, argv[i]);
    }
    // combined the char *varName with char varName[] to create 2d array below
    char *states[] = {"Califorina", "Oregon", "Texas", "Sanjose", "Washington", NULL};
    argv[1] = states[3]; // both above and below don't work..
    states[1] = argv[3];
    int num_states = 6;

    for(i = 0; i < num_states; i++){
        printf("States %d is %s %s \n", i, states[i], argv[i]);
    }
    // States 5 is (null) j
    return 0;
}