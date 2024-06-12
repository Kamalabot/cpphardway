#include <stdio.h>
#include <ctype.h>

int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[]){
    for (int i = 1; i < argc ; i++){  // ensure the i is from 1
        print_letters(argv[i]);
    }
}

void print_letters(char arg[]){
    for (int i = 0; arg[i] != '\0'; i++){
        char ch = arg[i];

        if (isalpha(ch) || isblank(ch)){ //can_print_it(ch)){
            printf("char is '%c' == %d ", ch, ch);
        }
    }
    printf("\n");
}
// can be removed
int can_print_it(char ch){
    return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[]){
    print_arguments(argc + 1, argv);
    return 0;
}