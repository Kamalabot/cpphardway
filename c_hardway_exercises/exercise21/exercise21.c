#include <stdio.h>
#include "exercise21.h"
#include "dbg.h"

int THE_SIZE = 1000;

static int THE_AGE = 36; // static says the variable is private this file

int get_age(){
    return THE_AGE;  // the variable can be accessed with the functions
}

void set_age(int age){
    THE_AGE = age;
}

double update_ratio(double new_ratio){
    static double ratio = 1.0;  // this static ensures the ratio is pvt to function scope

    double old_ratio = ratio;

    ratio = new_ratio;

    return old_ratio;
}

void print_size(){
    log_info("I think the size is: %d", THE_SIZE);
}