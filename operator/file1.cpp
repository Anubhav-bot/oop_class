#include <iostream>
using namespace std;

class Complex {
    int real, image;
    public:
    void getdata() {
        cout << "Enter the value of real numbers: ";
        cin >> real;
        cout << "Enter the value of imaginary numbers: ";
        cin >> image;
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

int main() {
    Complex obj1, obj2, obj3;
    obj1.getdata();
    obj2.getdata();
    obj3 = obj1 + obj2;
    obj3.display();
    return 0;
}

