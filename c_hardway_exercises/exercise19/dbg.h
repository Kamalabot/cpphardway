/* As you write more and more C code, you’ll
write code with this pattern:
• Call a function.
• Check if the return value is an error (and it must look that up each time,
too).
• Then, clean up all the resources created so far.
• Lastly, print out an error message that hopefully helps.
*/
/*It does this by adopting the convention that whenever there’s an error, your
function will jump to an error: part of the function that knows how to clean
up everything and return an error code. You can use a macro called check to
check return codes, print an error message, and then jump to the cleanup section.
You can combine that with a set of logging functions for printing out useful
debug messages
*/

#ifndef __dbg_h__
#define __dbg_h__

#include <stdio.h>
#include <errno.h>
#include <string.h>
#define DNDEBUG
#ifndef NDEBUG
#define debug(M, ...)
#else
#define debug(M, ...) fprintf(stderr, "DEBUG %s:%d: " M "\n", __FILE__, __LINE__, ##__VA_ARGS__)
#endif
#define clean_errno() (errno == 0 ? "None" : strerror(errno))

#define log_err(M, ...) fprintf(stderr, \
            "[ERROR] (%s:%d: errno: %s) " M "\n", __FILE__, __LINE__, clean_errno(), ##__VA_ARGS__)

#define log_warn(M, ...) fprintf(stderr,\
            "[WARN] (%s:%d: errno: %s) " M "\n",\
            __FILE__, __LINE__, clean_errno(), ##__VA_ARGS__)

#define log_info(M, ...) fprintf(stderr, "[INFO] (%s:%d) " M "\n",\
            __FILE__, __LINE__, ##__VA_ARGS__)

#define check(A, M, ...) if(!(A)) {\
            log_err(M, ##__VA_ARGS__); errno=0; goto error; }

#define sentinel(M, ...) { log_err(M, ##__VA_ARGS__);\
            errno=0; goto error; }

#define check_mem(A) check((A), "Out of memory.")

#define check_debug(A, M, ...) if(!(A)) { debug(M, ##__VA_ARGS__);\
            errno=0; goto error; }

#endif

// CPP replaces macros with the expanded version of their definition, and it will do
// this recursively, expanding all of the macros in macros.
// Recursive templatized system whose power comes from generating parameterized code 
// y, CPP has the ability to conditionally compile portions of code, so you can
// Conditionally compile code that’s only present when you build a developer 
// or debug version of the program.