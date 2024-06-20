#include <iostream>

using namespace std;

class Cube {
    public:
        int side;
        int volume() {
            return side * side * side;
        }
};

class Cube2{
    public:
        int side;
        int volume();
};

int Cube2::volume() { // scope resolution
    return side * side * side;
}

int main() {
    Cube c;
    Cube2 c2;
    c.side = 4;
    c2.side = 4;
    cout << "Cube Object" << c.volume() << endl;
    cout << "Cube2 Object" << c2.volume() << endl;
    return 0;
}
