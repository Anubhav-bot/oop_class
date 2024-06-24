//To demonstrate the returning object from function.

#include <iostream>
using namespace std;

class A {
    public:
        int id;
        string name;
        int age;
        A input(int x, int a, string s) {
            A obj;
            obj.id = x;
            obj.age = a;
            obj.name = s;
            return obj;
        }

        void display(A obj) {
            cout << "ID: " << obj.id << endl;
            cout << "Name: " << obj.name << endl;
            cout << "Age: " << obj.age << endl;
        }
};

int main() {
    A b;
    b = b.input(1001, 28, "Ram");
    b.display(b);
    return 0;
}
