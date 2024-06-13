// demystify pointers by learning the vocabulary of pointers
// indexing array of ages in 3 different ways to learn pointers
#include <stdio.h>

// int main(int argc, char *argv[]){
// argv has to contain ** or []
int main(int argc, char **argv){
    int ages[] = {23, 57, 89, 14, 45};  // ages becomes location in computer memory
    char *names[] = {"chuck", "joe", "Bob", "Lisa", "Joy"};
    // safely access size of ages
    int ageCount = sizeof(ages) / sizeof(int);

    int i = 0;
    for(i = 0; i < ageCount; i++){
        printf("%s is %d years alive.\n", names[i], ages[i]);
    }
    printf("---\n");

    int *cur_age = ages; // no need to use & for array
    char *cur_age_as_names = (char)(ages + 5); // trying to cast the pointers!!!
    // the above gives a new pointer, not what we are seeking
    printf("What is there in cur_age_as_names: %p\n", cur_age_as_names);
    char *cur_age_as_names = (ages + 5); // trying to cast the pointers!!!
    // the above gives a new pointer, not what we are seeking
    printf("What is there in cur_age_as_names: %p\n", cur_age_as_names);

    int **cur_name = names; // using double pointers for string arrays!!! 

    for(i = 0; i < ageCount; i++){
        printf("%s is %d years old pointedly...\n",
                *(cur_name + i), *(cur_age + i)); // value of(pointer cur_name + i)
    }

    printf("---\n");
    // interesting... pointers are arrays.
    for (i = 0; i < ageCount; i++){
        printf("%s is %d years old\n", cur_name[i], cur_age[i]);
    }
    printf("---\n");
    printf("Will this print ages as pointer: %p \n", ages);
    printf("Will this print names as pointer: %p \n", names);
    printf("What is address after names+4 as pointer: %p \n", names + 4);
    // more complex way with pointers, learning for loop
    for(cur_name=names, cur_age=ages; // assigns the beginnings of names and ages
        (cur_age - ages) < ageCount; cur_age++, cur_name++){  // use pointer comparison and math
        printf("%s is %d years old pointed complexly...\n",
                *cur_name, *cur_age);
        }
    return 0;
}