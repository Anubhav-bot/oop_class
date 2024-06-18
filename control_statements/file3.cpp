#include <iostream>

using namespace std;

int main() {
    int x, i;
    cout << "Enter a number: ";
    //prime
    for(i = 2; i < x; i++) {
        if(x % i == 0) {
            cout << "Not Prime" << endl;
            break;
        }
    }
    if(i == x) {
        cout << "Prime" << endl;
    }

    return 0;
}
