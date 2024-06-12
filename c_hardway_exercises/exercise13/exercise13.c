// switch statements are jump table
// can put any expression that result in integers

#include <stdio.h>

int main(int argc, char *argv[]){
    if(argc != 2){
        printf("You will need one argument\n");
        return 1;
    }

    int i = 0;
    for(i = 0; argv[1][i]!='\0'; i++){
        char letter = argv[1][i];
        switch (letter)
        {
        case 'a':
        case 'A':
            printf("%d: A vowel\n", i); 
            break; 
        case 'e':
        case 'E':
            printf("%d: E Vowel\n", i); 
            break; 
        case 'i':
        case 'I':
            printf("%d: I Vowel\n", i); 
            break; 
        case 'o':
        case 'O':
            printf("%d: O Vowel\n", i); 
            break; 
        case 'u':
        case 'U':
            printf("%d: U Vowel\n", i); 
            break; 
        case 'y':
        case 'Y':
            if (i > 2){
                printf("%d: y Vowel\n", i); 
            }
            break; 
        default:
            printf("%d: %c is not a vowel\n", i, letter);
        }
    }
    return 0;
}