#include <iostream>

/*
const:

- const is a cv-qualifier (constant volatile qualifier) that indicates a variable's value won't change after initialization.
- It's a runtime concept, meaning the variable's value is determined during program execution.
- const variables can be initialized dynamically, using runtime computations.

Example: const int x = foo(); (x is const, but its value is determined at runtime)

constexpr:

- constexpr is a keyword that defines a variable or function that can be evaluated at compile-time.
- It's a compile-time concept, meaning the variable's value is determined during compilation.
- constexpr variables must be initialized with a constant expression, which can be evaluated by the compiler.
*/
int main(){

	constexpr int SOME_LIB_MAJOR_VERSION {1237};
	
	constexpr int eye_count {2};
	
	constexpr double PI {3.14};

    //eye_count = 4;
	
	std::cout << "eye count : " << eye_count << std::endl;
	std::cout << "PI : " << PI << std::endl;


	//int leg_count {2}; // Non constexpr
	                    // leg_count is not known at compile time
	//constexpr int arm_count{leg_count}; // Error 


	constexpr int room_count{10};
	constexpr int door_count{room_count};// OK
	
	const int table_count{5};
	constexpr int chair_count{ table_count * 5};// Works


   // static_assert( SOME_LIB_MAJOR_VERSION == 123);

   // int age = 5;
   // static_assert( age == 5);

    std::cout << "App doing its thing..." << std::endl;


   
    return 0;
}