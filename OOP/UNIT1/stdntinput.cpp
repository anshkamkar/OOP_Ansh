#include <iostream>
using namespace std;
class student {
    public:
    int rno;
    float per;

    void display() {
        cout << "Roll Number: " << rno <<endl;
        cout << "Percentage: " << per <<endl;
    }
};

int main(){
    student s1;
    student s2;

    cout << "Enter Student Roll Number: ";
    cin>>s1.rno;

    cout << "Enter Student Percentage: ";
    cin>>s1.per;

    cout << endl;

    cout << "Enter Student Roll Number: ";
    cin>>s2.rno;    

    cout << "Enter Student Percentage: ";
    cin>>s2.per;

    cout << endl;
    cout << endl;

    s1.display();
    cout << endl;
    s2.display();
    
    return 0;
}