// WAP to create a class called Rectangle that has private member variables for length and width. Implement the member functions to calculate the rectancle's area and perimeter using Constructors.
//

#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;
public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }
    float area()
    {
        return length * width;
    }
    float perimeter()
    {
        return 2 * (length + width);
    }
};

int main()
{
    int l, b;
    cout << "Enter length and width: ";
    cin >> l >> b;
    Rectangle r(l, b);
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;
    return 0;
}
