#include <iostream>
using namespace std;

class student {
    private:
        int roll;
    public:
        int getRoll(){
            return roll;
        }

        void setRoll(int r){
            roll = r;
        }
};

int main()
{
    student s1;
    s1.setRoll(100);
    cout << s1.getRoll() << endl;
    return 0;
}
