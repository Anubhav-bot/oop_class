//WAP to create a class called person that has private member variablees for name, age and country. Implement member function to set and get the values of these variables.


#include <iostream>
using namespace std;

class Person {
    private:
        int age;
        string name;
        string country;
    public:
        void setName(string n) {
            name = n;
        }
        void setAge(int a) {
            age = a;
        }
        void setCountry(string c) {
            country = c;
        }
        string getName() {
            return name;
        }
        int getAge() {
            return age;
        }
        string getCountry() {
            return country;
        }
};

int main() {
    Person p;
    p.setName("Timothy");
    p.setAge(20);
    p.setCountry("USA");
    cout << "Name: " << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;
    cout << "Country: " << p.getCountry() << endl;
    return 0;
}
