/* Structure in C++ */

#include <iostream>

using namespace std;

struct Person {
    char person[50];
    int age;
    int salary;
};

int main() {
    Person p1;
    cout << "Enter Fullname: ";
    cin >> p1.person;

    cout << "Enter Age: ";
    cin >> p1.age;

    cout << "Enter Salary: ";
    cin >> p1.salary;

    cout << endl;

    cout << "Fullname: " << p1.person << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary << endl;
    return 0;
}
