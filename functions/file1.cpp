/*

 Operator overloading

 An overloaded operator is called an operator function. Declare an operator function with the keyword operator precding the operator. 

 Overloaded operators are distinct from overloaded functions, but like overloaded functions, they are distinguished by the numbers and types of operands used with the operator.

 */

#include <iostream>
using namespace std;

class Complex {
    double real;
    double image;

    public:
        Complex(double real = 0., double image = 0.); // constructor
        Complex operator +(const Complex &)const;// operator 
        
        void display() {
            cout << "Real: " << real << endl;
            cout << "Imaginary: " << image << endl;
        }
                                               
};

Complex::Complex(double r, double i)
{
    real = r;
    image = i;
}

Complex Complex::operator +(const Complex &c)const {
    Complex result;
    result.real = (this -> real + c.real);
    result.image = (this -> image + c.image);
    return result;
}

int main() {
    Complex x(4, 4);
    Complex y(6, 6);
    Complex z = x + y;
    z.display();

    return 0;
}
