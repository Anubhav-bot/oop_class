#include <iostream>

using namespace std; 

class student {
    public:
        int roll_no;
        string name;
}A, B;

int main() {
    A.roll_no = 1;
    A.name = "John";
    B.roll_no = 2;
    B.name = "Jane";
    cout << A.roll_no << " " << A.name << endl;
    cout << B.roll_no << " " << B.name << endl;
    return 0;
}
