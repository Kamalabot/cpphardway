// 2d array are array of array 
// {array1, array2, array3} similar to tensors
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main(){
    string cars[][3] = {{"veyron", "ferrari", "maseratti"},
                        {"Hyundai", "Honda", "Toyota"},
                        {"Maruti", "Tata", "Mahindra"}};

    cout << "Size of the row is " << sizeof(cars[0]) << "\n";
    int rows = sizeof(cars) / sizeof(cars[0]);  // cars[0] is complete row
    int cols = sizeof(cars[0]) / sizeof(cars[0][0]);  // individual columns are then taken up
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << cars[i][j] << " ";
        }
        cout << " \n";
    }
}