// discusses the & and * variable

// *pName = &name means ptr var is created 
// to contain the address of the name

#include <iostream>
using std::string;
using std::cout;
using std::cin;

int main() {
    /*
    string name = "Insighter";
    int bookCount = 10;

    string *pName = &name;    
    int *pBookcount = &bookCount;
 
    cout << pName << " Contains the address of name\n";
    cout << *pName << " with the * it shows the value at the address\n";

    cout << pBookcount << " Contains the address of the name\n"; // can I extract the address and process it? 
    cout << *pBookcount << " This is the value inside the pointer";
    */
    string foods[10];
    
    fill(foods, foods + 10, "Tea");
    string *pFoods = foods; // This array is already an address, so no need for using &
    // when the array is declared, instrinsicly its a pointer.

    cout << pFoods << " This will contain the address\n"; 
    cout << *pFoods << " This will provide the list of elements\n";
    for(int i = 0; i < 10; i++){
        // yourData = pFoods * i * sizeof(string); // this is not working due to type of the array
        // cout << "The food is " << *pFoods + i * sizeof(string) << "\n"; // wont work, due to string type
        cout << "The food is " << *pFoods << "\n";
    }
    cout << foods << " This will again contain the address only, its a pointer in disguise\n";
    cout << *foods << " This will again contain the address only\n";
}
/*
// Pass by value
void add(int x, int y) {
  x += y;
}

int main() {
  int a = 10;
  int b = 20;

  add(a, b);

  // a will still be 10
  std::cout << a << std::endl;
}
*/
/*
// Pass by reference
void add(int& x, int& y) {
  x += y;
}

int main() {
  int a = 10;
  int b = 20;

  add(a, b);

  // a will now be 30
  std::cout << a << std::endl;
}
*/
/*
// Pass by pointer
void add(int* x, int* y) {
  *x += *y;
}

int main() {
  int a = 10;
  int b = 20;

  add(&a, &b);

  // a will now be 30
  std::cout << a << std::endl;
}
*/