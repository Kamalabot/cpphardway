#include <stdio.h>
#include <string.h>
#include "dbg.h"
//  Duff's device is a way of manually implementing loop unrolling by interleaving
// two syntactic constructs of C: the do- while loop and a switch statement.
// Understand what is Loop Unrolling...

/* memmove()
// Copies "numBytes" bytes from address "from" to address "to"
void * memmove(void *to, const void *from, size_t numBytes);
https://www.geeksforgeeks.org/memmove-in-cc/
*/
/*memcpy()
void *memcpy(void *to, const void *from, size_t numBytes);
 memcpy() function in C and C++ is used to copy a block of 
 memory from one location to another. Unlike other copy functions,
 the memcpy function copies the specified number of bytes from one
 memory location to the other memory location regardless of the type of data stored.
 https://www.geeksforgeeks.org/memcpy-in-cc/
*/
int normal_copy(char *from, char *to, int count){
    int i = 0;
    for (i = 0; i < count; i++){
        to[i] = from[i];
    }
    printf("%d", i);
    return i;
}

int duffs_device(char *from, char *to, int count){
    {
        int n = (count + 7) / 8;
        printf("The value of n: %d\n", n);
        printf("The value of count %% 8: %d \n", (count + 7) % 8);
        switch(count % 8){
            case 0:
                do {
                    *to++ = *from++;
                    case 7:
                    *to++ = *from++;
                    case 6:
                    *to++ = *from++;
                    case 5:
                    *to++ = *from++;
                    case 4:
                    *to++ = *from++;
                    case 3:
                    *to++ = *from++;
                    case 2:
                    *to++ = *from++;
                    case 1:
                    *to++ = *from++;
                } while (--n > 0);
        }
    }
    printf("When duff's device fails, the count is: %d\n", count);
    return count;
}

int zeds_device(char *from, char *to, int count){
    {
        int n = (count + 7) / 8;
        switch(count % 8){
            case 0:
again:      *to++ = *from++;
            case 7:
            *to++ = *from++;
            case 6:
            *to++ = *from++;
            case 5:
            *to++ = *from++;
            case 4:
            *to++ = *from++;
            case 3:
            *to++ = *from++;
            case 2:
            *to++ = *from++;
            case 1:
            *to++ = *from++;
            if (--n > 0)
                goto again;
        }
    }
    return count;
}

int valid_copy(char *data, int count, char expects){
    int i = 0;
    for(i = 0; i < count; i++) {
        if(data[i] != expects){
            log_err("[%d] %c != %c", i, data[i], expects);
            return 0;
        }
    }
    return 1;
}

int main(int argc, char *argv[]){
    char from[1000] = { 'a' };
    char to[1000] = { 'c' };
    int rc = 0;
    // set up from to have stuff
    memset(from, 'x', 1000); // copies x into 
    /*
      void *memset(void *ptr, int x, size_t n)
      // ptr ==> Starting address of memory to be filled
      // x   ==> Value to be filled
      // n   ==> Number of bytes to be filled starting 
      //         from ptr to be filled
    */
    // set it to failure mode
    // printf("%s\n", from);
    memset(to, 'y', 1000);
    // printf("%s\n", to);
    check(valid_copy(to, 1000, 'y'), "not initialized right.");
    rc = normal_copy(from, to, 1000);
    // printf("%d", rc);
    // printf("%s\n", to); // based on this print, the copy has worked!!!
    check(rc == 1000, "Normal Copy failed: %d", rc);
    check(valid_copy(to, 1000, 'x'), "Normal Copy failed");
    //reset 
    memset(to, 'y', 1000);
    //duffs version
    rc = duffs_device(from, to, 999);
    check(rc==1000, "Duff's device failed: %d", rc);
    check(valid_copy(to, 1000, 'x'), "Duffs device failed copy");
    //reset 
    memset(to, 'y', 1000);
    //duffs version
    rc = zeds_device(from, to, 1000);
    check(rc==1000, "Zed's device failed: %d", rc);
    check(valid_copy(to, 1000, 'x'), "Zeds device failed copy");
    return 0;
    // since none of the checks print the errors, the functions are executing 
    // as per the plan. There is no issue in the code. 
error:
    return 1;
}