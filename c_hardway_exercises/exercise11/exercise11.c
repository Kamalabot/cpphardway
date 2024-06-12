#include <stdio.h>
// . C treats strings as just arrays of bytes, and it’s
// only the different printing functions that recognize a difference

int main(int argc, char *argv[]){
    int numbers[4] = { 9 };
    // char name[4] = { 'a' };
    // int name[4] = { 'a' };
    // int *name[4] = { 'a' }; // will throw a hell a lot of warnings
    char *name[4] = { 'a' }; // will throw a hell a lot of warnings
    printf("Numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("Chars: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
    // printf("Chars as numbers: %d %d %d %d\n", name[0], name[1], name[2], name[3]);
    // commenting out to test if name can be made into int and letters assigned
    // printf("Name: %s\n", name);

    // setup nums and name manually
    // numbers[0] = 0;
    // numbers[1] = 150;
    // numbers[2] = 50;
    // numbers[3] = 70;
    numbers[0] = 'a';
    numbers[1] = 'b';
    numbers[2] = 'i';
    numbers[3] = 'f';

    name[0] = 'N';
    name[1] = 'e';
    name[2] = 'd';
    name[3] = '\0'; // this is the string terminator

    printf("Numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("Chars: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
    // printf("Chars: %d %d %d %d\n", name[0], name[1], name[2], name[3]);
    //printf("Name: %s\n", name);

    // char *another = "Shaw"; // by default there is '\0'.
    char *another = "Shaw\1";
    printf("Printing another as string: %s\n", another);

    printf("Printing another char by char: %c %c %c %c %c\n",
            another[0], another[1],another[2],another[3],another[4]);
    printf("Printing another char by char: %c %c %c %c %d\n",
            another[0], another[1],another[2],another[3],another[4]);

    return 0;
}