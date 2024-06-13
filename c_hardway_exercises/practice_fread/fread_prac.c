#include <stdio.h>

int main(){
    FILE* filePointer;
    char buffer[100];  // buffer to store the read data
    printf("The size of buffer is %d\n", sizeof(buffer));
    filePointer = fopen("g4g.txt", "rb");

    // data is read from the file into the buffer
    // sizeof(buffer) specifies size of each element
    // read 1 element 
    // filePointer is the file to read from
    // https://stackoverflow.com/questions/50421414/fread-not-working-as-expected
    while (!feof(filePointer)){
        // printf("looping in...\n");
        fread(buffer, sizeof(buffer), 1, filePointer);
        // fread(buffer, 1, sizeof(buffer), filePointer);
        // The second and third arguments are called size and nmemb, which 
        // are meant to be the size of each data item and the number 
        // of data items to read. 
        printf("%s\n", buffer);
    }
    // Case when count is equal to 0
    printf("count = 0, return value = %zu\n",
           fread(buffer, sizeof(buffer), 0, filePointer));
    // Case when size is equal to 0
    printf("size = 0, return value = %zu\n",
           fread(buffer, 0, 1, filePointer));
    fclose(filePointer);
    return 0;
}