#include "utils.h"
#include <iostream>
#include <math.h>
using std::cout;
using std::endl;

double repayMonth(double bal, double apr, double pymt){
    double month;
    double numer;
    cout << "log(1 + apr) " << log(1 + apr) << endl;
    double part1 = (bal / pymt) * (1 - pow((1 + apr), 30));
    // cout << "part1" << part1 << endl;
    numer = log(1 + part1); 
    cout << "Numerator product is " << numer / log(1+apr) << endl; 
    month = (-1 / 30) * (numer / (log(1 + apr)));
    cout << "Months required to repay are: " << month;
    return month;
}