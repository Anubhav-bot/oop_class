#include<iostream>
using namespace std;

int main() {
    int a = 5, b = 0,c;
    try {
        if (b==0) {
            throw "Division by zero";
        }
        c = a/b;
    }
    catch(const char* ex) {
        cout << ex << endl;
    }
    return 0;
}
