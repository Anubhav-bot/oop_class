// To demonstrate object as a function argument
#include <iostream>
using namespace std;

class A {
    private:
        int a;
    public:
        void set(int x) {
            a = x;
        }

        void sum(A obj, A obj2) {
            a = obj.a + obj2.a;
        }

        void display() {
            cout << "Value of a: " << a << endl;
        }
};

int main() {
    A d1;
    A d2;
    A d3;
    d1.set(10);
    d2.set(15);
    d3.sum(d1, d2);
    d1.display();
    d2.display();
    d3.display();

    return 0;
}
