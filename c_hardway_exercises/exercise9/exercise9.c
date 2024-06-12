#include <stdio.h>

int main(int argc, char *argv[]){
    char* states[] = {"start", "Middle", "halfToMid", "halfAfterMid", "full"};
    int i = 0;
    while(i < 5){
        printf("%d is current i\n", i);
        printf("%s is current state \n", states[i]);
        i++;
    }
    printf("Going reverse: \n");
    int y = 5;
    while(y > -1){
        printf("%d is current i\n", y);
        printf("%s is current state \n", states[y]);
        y--;
    }
    return 0;
}