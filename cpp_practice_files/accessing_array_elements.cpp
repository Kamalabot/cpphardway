// Introducing different ways of accessing & working with arrays

#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

double getTotal(double prices[], int arraySize);
int searchArray(int array[], int arraySize, int element);

int main()
{
   string studs[4];
   studs[0] = "Rajini";
   studs[1] ="Kamal";
   studs[2] = "Karthik";
   studs[3] = "Prabhu";

   double marks[] = {56, 23.1, 47.6, 51.2};
   // remember to place [] when array declaration
   /*
   cout << studs[0] << "\n"; 
   cout << studs[1] << "\n"; 
   cout << studs[2] << "\n"; 
   cout << studs[3] << "\n"; 
   for(int i = 0; i <= 3; i++){
    cout << studs[i] << "\n";
   }
   int arrayLen = sizeof(studs) / sizeof(string);
   for(int i = 0; i < arrayLen; i++){
    cout << studs[i] << "\n";
   }
    for(string stud : studs){
        cout << stud << "\n";
    }

    cout << "Printing Marks: \n";
    for(double mark: marks){
        cout << "Mark is: " << mark << endl;
    }
    int marksLen = sizeof(marks)/ sizeof(marks[0]);
    int marksTotal = getTotal(marks, marksLen);
    cout << marksTotal << " Is the total Marks\n";
   */
    int yourNums[] = {1, 2, 7, 9, 12, 35};
    int index;
    int myNum;
    int numSize = sizeof(yourNums)/sizeof(yourNums[0]);

    cout << "Which number you want to get the index";
    cin >> myNum;

    index = searchArray(yourNums, numSize, myNum);
    if (index != -1){
        cout << "The index is " << index;
    }
    else{
        cout << myNum << " Index is not found";
    }
    return 0;
}

double getTotal(double prices[],int arraySize){
    double total = 0;
    // cout << prices;
    // OH, SO ONLY AN ARRAY DEFINED INSIDE A FUNCTION CAN BE USED IN THAT FUNCTION WITH FOR EACH LOOP.
    // OR A GLOBAL ARRAY.
    // BUT NOT THE ONE PASSED FROM PARAMETERS.
    // Following for-each wont work
    //for(double price: prices){
        //total += price;
    //}
    // for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){ // calculating size here will warn about the size 
    for(int i = 0; i < arraySize; i++){ // calculating size here will warn about the size 
        total += prices[i];
    }
    return total;
}

int searchArray(int array[], int arraySize, int element){
    // The same has to be implemented for searching String & returning Index
    for(int i = 0; i < arraySize; i++){
        if (array[i] == element){
            return i;
        }
    }
    return -1;
}