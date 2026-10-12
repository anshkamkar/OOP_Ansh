#include <iostream>
using namespace std;


class Student
{

public:
    int rno;
    string nm;
    static int c;   
    
    void getData()
    {
        cout << "Enter Roll No: ";
        cin >> rno;

        cout << "Enter Name: ";
        cin >> nm;

        c++;
    }

    void display()
    {
        cout << "Roll No: " << rno  << endl;;
        cout << "Name: " << nm  << endl;;
    }

    static void showCount()
    {
        cout << "Total Students " << c << endl;
    }
};


int Student::c = 0;

int main()
{
    Student s1, s2;

    s1.getData();
    s2.getData();

    s1.display();
    s2.display();

    Student::showCount();

    return 0;
}