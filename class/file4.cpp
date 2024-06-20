#include <iostream>
using namespace std;

class Cube {
    public:
        int side;
        int area() {
            return 6 * side * side;
        }
};

int main() {
    Cube c;
    c.side = 4;
    cout << "Area of cube with side " << c.side << " is " << c.area() << endl;
    return 0;
}
