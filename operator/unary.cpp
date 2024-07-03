#include <iostream>
using namespace std;

class checkCount {
    public:
        int countplus;
        int countminus;
        checkCount() {
            countplus = 0;
            countminus = 3;
        }

        void operator++() {
            ++countplus;
        }

        void operator--() {
            --countminus;
        }
};

        
int main() {
    checkCount x,y;
    cout << "before increment/decrement" << endl;
    cout << x.countplus << endl;
    cout << y.countminus << endl;
    ++x;
    --y;
    cout << "after increment/decrement" << endl;
    cout << x.countplus << endl;
    cout << y.countminus << endl;
    return 0;
}

