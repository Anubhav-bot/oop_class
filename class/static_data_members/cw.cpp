#include <iostream>

using namespace std;

class Rect {
    private:
        float width, length;

    public:
        Rect(float w, float l) {
            width = w;
            length = l;
        }

        float area () {
            return width * length;
        }
};

int main () {
    Rect rect1(10, 5), rect2(20, 10), rect3(10, 8);


    cout << "rect1 area: " << rect1.area() << endl;
    cout << "rect2 area: " << rect2.area() << endl;
    cout << "rect3 area: " << rect3.area() << endl;

    return 0;
}
