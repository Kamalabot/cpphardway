#include <stdio.h>

int main(){
    int *p;
    int x = 5;
    // p = &x;
    *p = &x;
    printf("pointer: %p \n", p);
    printf("pointer value: %p \n", *p); // this should be referring pointer p's address
    printf("pointer value: %d \n", *p); // observe the types in printf
}