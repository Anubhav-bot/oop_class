// WAP to implement a class BankAccount that has private member variables for account number and balance include member functions to deposit and withdraw money from the account.

#include <iostream>
using namespace std;

class BankAccount {
    private:
        int acc_no;
        int balance = 0;
    public:
        void deposit(int n){
            balance += n;
            cout << "Successfully deposited!!" << endl;
            cout << "New Balance: " << balance << endl;
        }

        void withdraw(int n){
            if (balance - n < 0) {
                cout << "Insufficient balance!!" << endl;
            }
            else {
                balance -= n;
                cout << "Successfully withdrawn!!" << endl;
                cout << "New Balance: " << balance << endl;
            }
        }

        void display() {
            cout << "Balance: " << balance << endl;
        }

};

int main() {
    BankAccount b;
    int dep;
    int wth;

    int ch;

    while (1) {

        cout << "=====================================" << endl;
        b.display();
        cout << "What do you want to do?" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "=====================================" << endl;
        cin >> ch;


        switch (ch) {
            case 1:
                cout << "Enter the amount you want to deposit: ";
                cin >> dep; 
                b.deposit(dep);
                break;

            case 2:
                b.display();
                cout << "Enter the amount you want to withdraw: ";
                cin >> wth; 
                b.withdraw(wth);
                break;
            default:
                cout << "Invalid choice" << endl;

        }
    }


    return 0;
}
