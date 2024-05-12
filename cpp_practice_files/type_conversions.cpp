#include <iostream>

int main() {
    using std::cout;
    using std::endl;
    // typeconversion -> Can be either implicit or explicit

    int x = 3.13; // implicitly becomes int by truncating .13
    cout << "Truncated int " << x << endl;

    int y = 3.13; // implicitly becomes int by truncating .13
    cout << "Truncated int " << (double) y << endl; // can it print out 3.13? Nope

    int correkt = 55;
    int total = 1521;

    // int pc_correct = correkt / total;  // it will print 0
    // double pc_correct = correkt / total;  // this will still print 0
    double pc_correct = correkt / (double) total;  // this will still print 0.0361

    cout << "Percentage correct is " << pc_correct << "\n";

}