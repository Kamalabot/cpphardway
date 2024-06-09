#include <iostream>

using namespace std;

int main(){
	cout << "Press c to convert celsius to farenheit " << endl;
	cout << "Press f to convert farenheit to celsius ";
	char yourchoice;
	cin >> yourchoice;
	
	double temperature;
	cout << "Enter the temperature: ";
	cin >> temperature;
	
	if (yourchoice == 'c'){
		double ret_faren = (temperature * 9 / 5) + 32;
		cout << "Celsius converted to " << ret_faren << " Farenheit" << endl;
	} else {
		double ret_cels = (temperature - 32) * 5 / 9;
		cout << "Farenheint converted to " << ret_cels << " Celsius" << endl;
	}
	return 0;
}
