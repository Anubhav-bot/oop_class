//FUNCTION TEMPLATE
#include <iostream>
using namespace std;

template <class T>

T larger(T x, T y) {
    return (x > y) ? x : y;
}

int main() {
    int x1, x2;
    float y1, y2;
    cout << "Enter two integers: ";
    cin >> x1 >> x2;
    cout << larger(x1, x2) << endl;
    cout << "Enter two floating point numbers: ";
    cin >> y1 >> y2;
    cout << larger(y1, y2) << endl;
    return 0;
}
