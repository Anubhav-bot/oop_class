//WAP to implement a class called employee that has member variables for name, empid, and salary. Include member function to calculate and update the salary by 10%
//

#include <iostream>
using namespace std;

class Employee {
    private:
        string name;
        int empid;
        float salary;
    public:
        Employee(string n, int e, float s) {
            name = n;
            empid = e;
            salary = s;
        }
        void setName(string n) {
            name = n;
        }
        void setEmpid(int e) {
            empid = e;
        }
        void setSalary(float s) {
            salary = s;
        }
        void increaseSalary() {
            salary += salary * 0.1;
        }
        void displaySalary() {
            cout << "Salary: " << salary << endl;
        }
};

int main() {
    Employee e("John", 101, 10000);
    e.displaySalary();

    e.increaseSalary();

    e.displaySalary();

    return 0;
}
