
//Deep copy constructors and shallow copy constructors.


// Deep copy constructor:
#include <cstring>
#include <iostream>

using namespace std;

class Demo {
    char *s_copy;
    public:
        Demo(const char *str) {
           s_copy = new char[10]; 
           strcpy(s_copy, str);
        }

        Demo(Demo &obj) {
            s_copy = new char[10];
            strcpy(s_copy, obj.s_copy);
        }

        void concate(const char *str) {
            strcat(s_copy, str);
        }

        ~Demo() {
            delete[] s_copy;
        }

        void display() {
            cout << s_copy << endl;
        }
};

int main() {
    Demo obj1("Copy");
    Demo obj2 = obj1;
    obj1.display();
    obj2.display();
    obj1.concate("Constructor");
    obj1.display();
    obj2.display();
    return 0;
}
