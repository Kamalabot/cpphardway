#include "exercise21.h"
#include "dbg.h"
// const is alternate to create constant variable apart from define
const char *MY_NAME = "KamalRaj M M";

void scope_demo(int count){
    log_info("Count is: %d", count);
    if (count > 10){
        int count = 100; // this var is only present inside the if scope
        log_info("Count in this scope is %d", count);
    }
    log_info("Count is at exit: %d", count);

    count = 3000;

    log_info("Count after assign: %d", count);
    // scope_demo(10); will make it recurse
}

int main(int argc, char *argv[]){
    log_info("My name is: %s, age: %d", MY_NAME, get_age());

    set_age(100);

    log_info("My age after setting it is: %d", get_age());

    log_info("The size is: %d", THE_SIZE);

    print_size();

    THE_SIZE = 9;

    log_info("The SIZE after setting it to 9 locally is: %d", THE_SIZE);

    print_size();

    log_info("The ratio at first is: %f", update_ratio(2.0));
    log_info("The ratio again is: %f", update_ratio(20.0));
    log_info("The ratio finally is: %f", update_ratio(257.0));

    int count = 3;

    scope_demo(count);
    scope_demo(count * 20);

    log_info("count after calling scope demo is: %d", count);

    return 0;
}
