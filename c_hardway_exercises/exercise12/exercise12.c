#include <stdio.h>
// arrays of data are so central to how C works, there are a huge number of ways to
// create them. 
int main(int argc, char *argv[]){
    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "Zed";
    char full_name[] = {
        'Z', 'e', 'd',
        ' ', 'A', '.', ' ',
        'S', 'h', 'a', 'w',
    };
    printf("The size of int: %llu \n", sizeof(int));
    printf("The size of areas: %llu \n", sizeof(areas));
    printf("The size of areas/ int: %llu \n", sizeof(areas) / sizeof(int));

    printf("The first area is %d and 2nd area is %d  \n", areas[0], areas[10]);
    // he first area is 10 and 2nd area is 825955054 when the data is accessed out of the array bounds

    printf("The size of char: %llu \n", sizeof(char));
    printf("The size of name: %llu \n", sizeof(name));
    printf("The size of name/ char: %llu \n", sizeof(name) / sizeof(char));

    printf("Size of full name array is: %llu \n", sizeof(full_name));

    printf("The size of full name/ char: %llu \n", sizeof(full_name) / sizeof(char));

    printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);
    return 0;
}