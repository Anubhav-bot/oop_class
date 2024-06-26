// WAP to implement a class called Circle that has private member variables for radius include member function to calculate circumference of circle.
//

#include <iostream>
using namespace std;


class Circle {
    private:
        int radius;
    public:
        void setRadius(int r) {
            radius = r;
        }
        int getCircumference() {
            return 2*3.14*radius;
        }
};


int main() {
    Circle c;
    c.setRadius(5);
    cout << c.getCircumference() << endl;
    return 0;
}
