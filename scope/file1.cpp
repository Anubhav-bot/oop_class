#include <iostream>

using namespace std;
int a,b; //global space
int fun(int);

int main() {
    int n1, n2; //local variables
    cout << "Enter two numbers: " << endl;
    cin >> n1 >> n2;
    if (n1==n2) {
        int temp; //block scope
        temp = n1 + n2;
        cout << "Sum is: " << fun(temp) << endl;
    }
    else {
        cout << fun(n1) << "\t" << fun(n2) << endl;
    
    }

}

int fun(int x) //function scope
{
    int r; //local scope
    r = x * 2;
    return r;
}
