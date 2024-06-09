#include <iostream>

using namespace std;

void addr(int &x, int &y); // defn is done with &
void add(int x, int y);
void addp(int *x, int *y); // defn is done with *
/*So, when we define a pointer to a pointer, the first pointer is used to store the
address of the variables, and the second pointer stores the address of the first pointer.
For this very reason, this is known as a Double Pointer or Pointer to Pointer*/

int main(){
	int a = 5;
	int b = 7;
	cout << "Value of a before fn call: " << a << endl;
	cout << "Value of b before fn call: " << b << endl;

	// initiating the addition with addp(int x, int y)
	add(a, b);

	cout << "Value of a after fn call by value: " << a << endl;
	cout << "Value of b after fn call by value: " << b << endl;

	addr(a, b); // fn call is done without & for ref passing

	cout << "Value of a after fn call by ref: " << a << endl;
	cout << "Value of b after fn call by ref: " << b << endl;

	addp(&a, &b);  // fn call is done with & for pointer pass

	cout << "Value of a after fn call by pointer: " << a << endl;
	cout << "Value of b after fn call by pointer: " << b << endl;

	int dbl = 567;
	int *pdbl = &dbl;
	int **ppdbl = &pdbl;
	// C++ programming language double pointer behave similarly to a normal pointer.
	// So, the size of the variable of the double-pointer and the size of 
	// the normal pointer variable is always equal.
	cout << "value of dbl is: " << dbl << endl;
	cout << "address value of pdbl is: " << pdbl << endl;
	cout << "address value of dbl is: " << ppdbl << endl;
	
	cout << "deref value of pdbl is: " << *pdbl << endl;
	cout << "deref value of ppdbl is: " << *ppdbl << endl;

	return 0;
}

void add(int x, int y){
	x = x + y;
}

void addr(int &x, int &y){
	cout << "x value: " << x << endl;
	cout << "y value: " << y << endl;
	// only the value is present, even though address is passed
	x = x + y;
}

void addp(int *x, int *y){
	cout << "x pointer without deref: " << x << endl;
	cout << "y pointer without deref: " << y << endl;

	cout << "x pointer after deref: " << *x << endl;
	cout << "y pointer after deref: " << *y << endl;

	*x = *x + *y;
}
