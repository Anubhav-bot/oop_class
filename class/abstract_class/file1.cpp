#include <iostream>
using namespace std;

class shape {
    protected:
        int a,b;
    public:
        virtual int Area() = 0;
        void get() {
            cin>>a>>b;
        }
};

class Rectangle: public shape {
    public:
        int Area() {
            return a*b;
        }
};

class Triangle: public shape {
    public:
        int Area() {
            return (a * b) / 2;
        }
};

int main() {
    Triangle t;
    cout << "Enter the a and b: ";
    t.get();
    cout << "Area is: " << t.Area() << endl;
    return 0;
}
