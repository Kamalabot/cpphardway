// Implementing the sorting algorithm
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void sortarray(int array[], int size);

int main(){
    int numarr[] = {1, 2, 7, 5, 4, 16, 10, 9};
    int arrSize = sizeof(numarr)/ sizeof(numarr[0]);
    cout << "Before sorting \n";

    for(int num: numarr){
        cout << num << " ";
    }
    // int sortedArray;
    // sortedArray = numarr; // you cannot assign an array to another !!!
    sortarray(numarr, arrSize);
    cout << "\n After sorting\n";
    for(int num: numarr){
        cout << num << " ";
    }
}

void sortarray(int array[], int size){
    int temp; // temporary storage
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}