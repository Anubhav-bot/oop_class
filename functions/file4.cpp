#include <iostream>
using namespace std;

int main() {
    int x=5;
    int *yx=&x;
    cout << "Value of x: \n" << x << endl;
    cout << "Value of y: \n" << *yx << endl;
    return 0;
}
