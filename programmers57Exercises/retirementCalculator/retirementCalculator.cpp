// retirementCalculator.cpp : Defines the entry point for the application.
//

#include "retirementCalculator.h"

using namespace std;

int main()
{
	cout << "Welcome to Retirement Calculator" << endl;
	int your_age, retire_age, year;
	char d1, d2;
	while (true){
		cout << "What is your age today: ";
		cin >> your_age;
		cout << "When you want to retire: ";
		cin >> retire_age;
		// while retire_age is less than your_age, the retire_age has to be re-entered to break the loop.
		while (retire_age < your_age) {
			cout << "Retirement age has to be higher than your age... Re-enter retirement age" << endl;
			cin >> retire_age;
		}
		cout << "So your age is " << your_age << " and you want to retire when you are " << retire_age << " Correct (y / n)?";
		cin >> d1;
		d1 = tolower(d1);

		if (d1 == 'y') {
			int diff_year = retire_age - your_age;
			cout << "Okay, you will retire in " << diff_year << " years!!!" << endl;
			cout << "Do you want to know what year you will retire? ";
			cin >> d2;
			d2 = tolower(d2);
			if (d2 == 'y') {
				cout << "Okay, enter the year now: ";
				cin >> year;
				cout << "You will retire in the year " << year + diff_year << endl;
			}
			else {
				cout << "Okay.. Have a great time ahead" << endl;
			}
			break;
		}
		else {
			cout << "I see you want to modify your choice, lets start... " << endl;
		}
	}
	return 0;
}
