#include <iostream>



int main(){
	// https://stackoverflow.com/questions/30391021/how-to-modify-a-const-reference-in-c
	//Non const reference
	std::cout << std::endl;
	std::cout << "Non const reference : " << std::endl;
	int age {27};
	// const int& ref_age{age};
	int& ref_age{age};

	std::cout << "age : " << age << std::endl;
	std::cout << "ref_age : " << ref_age << std::endl;
	
	
	//Can modify original variable through reference
	//throws error
	std::cout << std::endl;
	std::cout << "Modify original variable through reference : " << std::endl;
	
	// ref_age++; //Mofify through reference
	// ref_age = 56; //Mofify through reference
	
	std::cout << "age : " << age << std::endl;
	std::cout << "ref_age : " << ref_age << std::endl;

   //Simulating reference behavior with pointers
   //const int * const p_age {&age};
   //*p_age = 45;
	
   
    return 0;
}