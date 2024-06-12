#include <stdio.h>

int main(int argc, char *argv[]){
    int i = 9;
    if (argc == 1){
        printf("you have no args... exe is not an arg...\n");
    } else if (argc > 1 && argc < 4){
    // } else if (argc > 1 || argc < 4){
        printf("Your args are: \n");
        for(i = 1; i < argc; i++){ // skip the arg0
            printf("arg_%d is %s\n", i, argv[i]);
        }
    }else{
       printf("Too many args... reduce it below 4");
    }
    // else will inform when the args are more
    return 0;
    // you don't need to have either the else-if or else part
}