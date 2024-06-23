//Demonstration of destructor
//
#include <iostream>
using namespace std;

class Hello {
    public:
        Hello() {
            cout << "Constructor is called." << endl;
        }

        ~Hello() {
            cout << "Destructor is called." << endl;
        }

        void display() {
            cout << "Hello, World!" << endl;
        }
};

int main() {
    Hello h;
    h.display();
    return 0;
}
