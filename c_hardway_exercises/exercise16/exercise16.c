// learn how to make struct, point a pointer,
// get to know internal memory structure.

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person{
    char *name;
    int age;
    int height;
    int weight;
};  // this creates compound datatype that describes person

// following is a function with pointer reference that return struct
struct Person *Person_create(char *name, int age, int height, int weight){ // why use *func_name
    struct Person *who = malloc(sizeof(struct Person)); // gets a piece of memory from the processor
    assert(who != NULL);  //Ensure that valid memory has been recieved
    // NULL means unset or invalid pointer 
    who->name = strdup(name);  // used duplicate the string from name, to ensure struct owns the data
    who->age = age;
    who->height = height;
    who->weight = weight;
    return who;
}
// 
void Person_destroy(struct Person *who){
    assert(who != NULL);
    // free up the space created by name via strdup, and malloc for entire struct
    free(who->name);
    free(who);
}

void Person_print(struct Person *who){
    // Printing the individual items in the struct 
    printf("Name: %s\n", who->name);
    printf("Age: %d\n", who->age);
    printf("Height: %d\n", who->height);
    printf("Weight: %d\n", who->weight);
}

int main(int argc, char *argv[]){
    printf("The size of the struct Person is %lld\n", sizeof(struct Person));
    // create two persons and use Person_create to assign the data.
    struct Person *joe = Person_create("Joe Alex", 32, 64, 140);
    struct Person *frank = Person_create("Frank Blank", 20, 67, 180);

    printf("Joe is at the memory location %p\n", joe); // find where the struct is placed
    printf("Frank is at the memory location %p\n", frank); 

    Person_print(joe);
    printf("____\n");
    Person_print(frank);
    // increases the age of the persons
    joe->age += 20;
    joe->height -= 5;
    joe->weight += 56;
    Person_print(joe);
    printf("____\n");
 
    frank->age += 20;
    frank->height -= 5;
    frank->weight += 56;
    Person_print(frank);
    // destroy the structs created
    Person_destroy(joe);
    // Person_destroy(NULL);
    Person_destroy(frank);
    return 0;

}