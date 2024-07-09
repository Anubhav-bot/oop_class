#include<iostream>
using namespace std;

class emp {
    public:
        int salary;
        emp( int sal )
        {
            salary = sal;
        }

        emp operator=(emp n)
        {
            emp temp = n.salary;
            return temp;
        }
};

int main() {
    emp e1(1000);
    emp e2(2000);
    emp e3 = e1;
    cout << e3.salary;
    return 0;
}
