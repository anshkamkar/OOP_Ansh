#include <iostream>
using namespace std;
class student {
    public:
    int rno;
    float per;

    void display() {
        cout << rno << " is the roll number" <<endl;
        cout<< per << " is the percentage" <<endl;
    }
};

int main(){
    student s1;
    student s2;

    s1.rno = 1;
    s1.per = 92.91;

    s2.rno = 2;
    s2.per = 99.91;

    s1.display();
    cout << endl;
    s2.display();
    
    return 0;
}