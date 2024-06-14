#include <stdio.h>
// No, macros cannot be recursive. If a macro becomes recursive then definition refers
// to itself, and it will lead to an infinite loop during preprocessing.

#define MAXLIMIT LIMIT // chain macro, where internal macro is expanded first
#define LIMIT 5 // object like macro, simply replaced with value
#define AREA(l, b) (l * b)
#define MULTILINE 1,\
                  21,\
                  25,\
                  6
#define MIN(a, b) (((a) < (b))? (a) : (b))
#define PI 3.14123
#define AREAC(r) (PI*(r)*(r))

int main(){
    printf("The value of LIMIT is %d\n", LIMIT);
    int l1 = 10, l2 = 2, area;
    area = AREA(l1, l2);
    printf("The AREA from define AREA is: %d\n", area);

    printf("The value of MAXLIMIT is %d\n", MAXLIMIT);

    // using multiline macro in array
    int arr[] = { MULTILINE };

    printf("Element of Array are: \n");

    for(int i = 0; i < 3; i++){
        printf("The Elements are: %d\n", arr[i]);
    }
    printf("Minimum value between l1: %d and l2: %d is minimum: %d", l1, l2, MIN(l1, l2));
    int r = 25;
    printf("Area of circle of radius: %d is %.4f", r, AREAC(r));
}