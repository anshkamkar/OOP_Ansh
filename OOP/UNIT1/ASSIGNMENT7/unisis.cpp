#include <iostream>
using namespace std;

class ind {
public:
    string name;
    int age;
    long contact;

    ind(string name, int age, long contact) {
        this -> age = age;
        this -> name = name;
        this -> contact = contact;
    }

    void input1() {
        cout << "Name of the Student: " << endl;
        cin >> name;

        cout << "Age of the Student: " << endl;
        cin >> age;

        cout << "Contact Details: " << endl;
        cin >> contact;
    }

    void display1() {
        cout << "The name of the student is: " << name << endl;
        cout << "Age of the student is: " << age << endl;
        cout << "The contact details of the student are: " << contact << endl;
    }
};


class student : public ind {
public:
    int rno;
    string dep;

    student(int rno, string dep) : ind("", 0, 0) {
        this-> rno = rno;
        this-> dep = dep;
    }

    void input() {
        cout << "Roll Number: " << endl;
        cin >> rno;

        cout << "Department: " << endl;
        cin >> dep;
    }

    void display() {
        cout << "The Roll number of the student is: " << rno << endl;
        cout << "The department of the student is: " << dep << endl;
    }
};


int main() {
    ind i1("Ansh", 18, 9867401681);
    student s1(21, "AI");

    i1.input1();
    i1.display1();

    s1.input();
    s1.display();

    return 0;
}








  