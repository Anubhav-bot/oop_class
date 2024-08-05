#include <iostream>
using namespace std;

class Example {
    static int number;
    int n;
    public:
    void set_n() {
        n = ++number;
    }

    void show_n() {
        cout << "Value of n = " << n << endl;
    }

    static void showNumber() {
        cout << "Value of Number: " << number << endl;
    }
};

int Example::number;

int main() {
    Example e1, e2;
    e1.set_n();
    e2.set_n();

    e1.show_n();
    e2.show_n();

    Example::showNumber();
    return 0;
}
