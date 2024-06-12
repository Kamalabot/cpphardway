#include <stdio.h>

int main(int argc, char* argv[]){
    int distance = 100;
    float power = 2.345f;
    double super_power = 56789.4732;
    char initial = 'A';
    char first_name[] = "Kamal";
    char last_name[] = "Shaw";

    printf("You are %d miles away. \n", distance);
    printf("You have %f levels of power. \n", power);
    printf("You have %f awesome superpowers. \n", super_power);
    printf("I have a initial %c. \n", initial);
    printf("My first name is %s. \n", first_name);
    printf("My last name is %s. \n", last_name);
    printf("My full name is: %s %c %s \n", first_name, initial, last_name);

    int bugs = 2147483649; // testing overflow above 32768, and it did not overflow;
    // tried 2147483649
    double bug_rate = 1.2;
    printf("Your bug count is %d and increasing an imaginary rate of %f\n",
            bugs, bug_rate);

    unsigned long universal_bug_count = 1L * 1024L * 1024L * 1024L;
    // long universal_bug_count = 1L * 1024L * 1024L * 1024L * 10L;  will result in integer overflow
    printf("Entire universe has %ld bugs. \n", universal_bug_count);
    
    long long buggdybug = 1LL * 1024LL * 1024LL * 1024LL * 1024LL;
    printf("Lets expand the universe with long long %lld \n", buggdybug);

    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %f bugs more.\n", expected_bugs);

    double part_of_universe = expected_bugs / universal_bug_count;
    printf("Your bugs are only %e portion of the universe. \n", part_of_universe);

    char nul_byte = 'f';  // char is just numbers
    printf("The number inside char is %d\n", nul_byte);
    int care_pc = bugs * nul_byte;

    printf("That means you have care %d%% \n", care_pc);
    return 0;
}