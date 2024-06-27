//WAP to implement a class called student that has private member variables for name, class, roll_number and marks. Include member functions to calculate the grade based on the marks and display the student information.
//

#include <iostream>
using namespace std;

class student {
    private:
        string name;
        int class_;
        int roll_number;
        int marks;
    public:
        student(string n, int c, int r, int m) {
            name = n;
            class_ = c;
            roll_number = r;
            marks = m;
        }
        void setName(string n) {
            name = n;
        }
        void setClass(int c) {
            class_ = c;
        }
        void setRollNumber(int r) {
            roll_number = r;
        }
        void setMarks(int m) {
            marks = m;
        }
        int getMarks() {
            return marks;
        }
        int getRollNumber() {
            return roll_number;
        }
        string getName() {
            return name;
        }
        int getClass() {
            return class_;
        }

        string getGrade(int m) {
            if (m >= 90)
                return "A";
            else if (m >= 80)
                return "B";
            else if (m >= 70)
                return "C";
            else if (m >= 60)
                return "D";
            else
                return "F";
        }
};

int main() {
    int marks;
    cout << "Enter the marks for the student: ";
    cin >> marks;
    student s("John", 10, 101, marks);
    
    cout << "Name: " << s.getName() << endl;
    cout << "Class: " << s.getClass() << endl;
    cout << "Roll Number: " << s.getRollNumber() << endl;
    cout << "Marks: " << s.getMarks() << endl;
    cout << "Grade: " << s.getGrade(s.getMarks()) << endl;
    return 0;
}
