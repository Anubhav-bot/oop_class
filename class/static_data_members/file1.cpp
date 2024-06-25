#include <iostream>
using namespace std;

class items {
    static int count;
    int number;
    public:
    void getData(int a) {
       number = a;
       count++;
    }
    void getCount() {
       cout << "Count: " << count << endl;
    }
};

int items::count;

int main() {
    items x, y, z;
    cout << "Before" << endl;
    x.getCount();
    y.getCount();
    z.getCount();

    x.getData(100);
    y.getData(200);
    z.getData(300);

    cout << "After" << endl;
    x.getCount();
    y.getCount();
    z.getCount();

    return 0;
}



