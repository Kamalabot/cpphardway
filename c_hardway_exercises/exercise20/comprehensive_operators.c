#include <stdint.h> // provides the various typedef details unders
#include <stdio.h>

int main(int argc, char *argv[]){
    int8_t tea = 127;
    // uint8_t teau = 256; // will create overflow warning
    uint8_t teau = 255;
    printf("The int8_t value is %d\n", tea);
    printf("The uint8_t value is %d\n", teau);

    int array[5] = {5, 21, 6, 7, 9};
    size_t size = sizeof(array);
    // https://www.geeksforgeeks.org/size_t-data-type-c-language/
    printf("The size of the array is : %lu\n", size);

    int_least8_t leastea = 15;
    printf("looking at the int_least8_t value: %d\n", leastea);

    printf("what is the max of INTPTR_MAX: %d\n", INTPTR_MAX);
    printf("what is the max of UINTPTR_MAX: %d\n", UINTPTR_MAX);

    int f1 = 56;
    int f2 = 65;
    int f3 = 56;
    int f4 = 36;

    printf("The binary value with product: f1 * f2 : %d\n", f2 * f1);

    printf("Postfix f1++ : %d\n", f1++);
    printf("After Postfix is done on f1: %d\n", f1);
    printf("Before prefix of f2 : %d\n", f2);
    printf("Prefix ++f2: %d\n", ++f2);
    printf("After Prefix is done on f2: %d\n", f2);

    size_t f1size = sizeof(f1);

    printf("The size of f1 variable is %lu", f1size);

    int *pf1 = &f1;
    printf("The address of f1 variable through *pf1 is: %p\n", pf1);
    printf("The value of f1 variable through *pf1 is: %d\n", *pf1);
    printf("Directly accessing the address of f1 is, %p \n", &f1);

    if (f2 != f1){
        printf("f1 and f2 are not equal, f2: %d f1: %d\n", f2, f1);
    }
    if (f1 == f3){
        printf("f1 and f3 are equal f1: %d, f3: %d\n", f1, f3);
    }
    if (f2 > f3){
        printf("f2 is greater than f3 f2: %d f3: %d\n", f2, f3);
    }
    if (f1 < f2){
        printf("f1 is lesser than f2 f1: %d f2: %d\n", f1, f2);
    }
    if (f1 <= f3){
        printf("f1 and f3 are equal f1: %d f3: %d\n", f1, f3);
    }
    if (f1 > f4){
        printf("f1 is greater than f4 f1: %d f4: %d\n", f1, f4);
    }
    f1 > f4 ? printf("f1 is greater than f4,found through ternary") : printf("f4 is bigger.");

    int shift1 = 1;
    printf("shift1 is the shifted by 10: %d : 2 ** 10", shift1 << 10);
    int shift2 = 1024;
    printf("shift1 is the shifted left by 10: %d : 1024 / 2 ** 10", shift2 >> 7);

    return 0;
}