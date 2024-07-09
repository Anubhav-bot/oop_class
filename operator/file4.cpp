#include <iostream>
using namespace std;

class Complex {
    int real, image;
    public:

    Complex(int real=0, int image=0) {
        this->real = real;
        this->image = image;
    }

    Complex operator+(Complex obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.image = image + obj.image;
        return temp;
    }
    void display() {
        cout << real << " + " << image << "i" << endl;
    }
};
