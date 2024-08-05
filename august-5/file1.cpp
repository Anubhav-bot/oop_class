#include <iostream>
using namespace std;


class Shape {
    public:
        float area(int a, int b) {
            return a * b; //rectangle
        }

        float area(int a, int b, int c) {
            float s = (a + b + c) / 2.0f;
            return s*(s-a)*(s-b)*(s-c); // triangle
        }
};

int main() {
    Shape s;
    int a, b, c, n;
    cout << "Enter the number of parameters: " << endl;
    cin >> n;

    cout << "Enter the values: " << endl;

    switch(n) {
       case 2:
           cin >> a >> b;
           cout << "AREA: " << s.area(a, b) << endl;
           break;
       case 3:
           cin >> a >> b >> c;
           cout << "AREA: " << s.area(a, b, c) << endl;
           break;
       default:
           printf("Error! Invalid number of parameters\n");
           break;

    }
    return 0;
}

