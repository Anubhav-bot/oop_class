#include <iostream>
using namespace std;

class item1 {
    int no, quantity;
    float rate;
    public:
    item1(int n, int q, float r) {
        no = n;
        quantity = q;
        rate = r;
    }
    item1() {
        cout << "Item object created" << endl;
    }
    int getIn() {
        return no;
    }
    float getamt() {
        return rate * quantity;
    }
    void display() {
        cout << "Item number: " << no << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Rate: " << rate << endl;
    }
};

class item2 {
    int no;
    float amount;
    public:
    void operator=(item1 I)
    {
        no = I.getIn();
        amount = I.getamt();
    }
    void display() {
        cout << "no= " << no << "amount= " << amount << endl;
    }
};

int main() {
    item1 p(001, 20, 50);
    item2 p1;
    p1 = p;
    p.display();
    p1.display();
    return 0;
}
