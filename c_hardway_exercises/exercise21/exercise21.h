// When someone doesn’t grasp the concept of scope, it’s almost always a
// failure in understanding where variables are created, exist, and die.
#ifndef _exercise21_h
#define _exercise21_h

extern int THE_SIZE; // gives access to other .c files to this variable
// variable exists but in some external location
int get_age();
void set_age(int age);

double update_ratio(double ratio);

void print_size();
#endif