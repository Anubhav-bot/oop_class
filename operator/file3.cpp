#include <iostream>
using namespace std;

class Num {
    int n;
public:
    Num(int r=0) {
        n = r;
    }

    Num operator*(Num& x) {
        Num temp; 
        temp.n = n + x.n;
        return temp;
    }

    Num operator+(Num& x) {
        Num temp; 
        temp.n = n * x.n;
        return temp;
    }

    friend std::ostream& operator<<(std::ostream& out, Num& x);
};

std::ostream& operator<<(std::ostream& out, Num& x) {
    out << x.n;
    return out;
}

int main() {
    Num n1(2), n2(3), n3;
    n3 = n1 * n2;
    cout << n1 << " * " << n2 << " = "<< n3 << endl;
    n3 = n1 + n2;
    cout << n1 << " + " << n2 << " = "<< n3 << endl;
    return 0;
}
