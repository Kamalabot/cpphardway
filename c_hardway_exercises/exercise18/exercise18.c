// purpose of pointing pointers to function is 
// to pass call backs to other functions, or 
// simulate classes and objects.
// Write a normal function declaration: int callme(int a, int b)
// Wrap the function name with the pointer syntax: int (*callme)(int a, int b)
// Change the name to the pointer name: int (*compare_cb)(int a, int b)
// y. C has this ability to take one pointer and convert it to another so you can process the
// data in different ways
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

void die(const char *message){
    if(errno){
        perror(message);
    }else{
        printf("Error: %s\n", message);
    }
    exit(1);
}

// typedef creates a fake type, in this case function pointer

typedef int (*compare_cb) (int a, int b);

// classic bubble sort function that uses compare_cb to do sorting

int *bubble_sort(int *numbers, int count, compare_cb cmp){
    int temp = 0;
    int j = 0;
    int i = 0;
    int *target = malloc(count * sizeof(int));

    if (!target)
        die("Memory allocation error...");

    memcpy(target, numbers, count * sizeof(int));

    for(i = 0; i < count; i++){
        for(j = 0; j < count; j++){
            // cmp function can be any of the three
            if(cmp(target[j], target[j + 1]) > 0){
                temp = target[j + 1];
                target[j + 1] = target[j];
                target[j] = temp;
            }
        }
    }
    return target;
}

int sorted_order(int a, int b){
    return a - b;
}

int reversed_order(int a, int b){
    return b - a;
}

int strange_order(int a, int b){
    if(a == 0 || b == 0) {
        return 0;
    } else {
        return a % b;
    }
}
/*Testing if we are sorting correctly*/

void test_sorting(int *numbers, int count, compare_cb cmp){
    int i = 0; 
    int *sorted = bubble_sort(numbers, count, cmp);
    if(!sorted)
        die("Failed to sort as requested");
    
    for(i = 0; i < count; i++){
        printf("%d \n", sorted[i]);
    }
    printf("\n");
    free(sorted);
    unsigned char *data = (unsigned char *)cmp;
    for(i = 0; i < 25; i++) {
        printf("%02x:", data[i]);
    }
    printf("\n");
}

int main(int argc, char *argv[]){
    if (argc < 2) die("Usage: exercise18 4 2 7 6 2 5");
    int count = argc - 1;

    int i = 0;
    char **inputs = argv + 1;

    int *numbers = malloc(count * sizeof(int));
    if(!numbers) die("Unable to allocate memory...");

    for(i = 0; i < count; i++){
        numbers[i] = atoi(inputs[i]);
    }
    test_sorting(numbers, count, sorted_order);
    test_sorting(numbers, count, reversed_order);
    test_sorting(numbers, count, strange_order);

    free(numbers);
    return 0;
}
