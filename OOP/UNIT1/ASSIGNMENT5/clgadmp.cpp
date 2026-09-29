#include <iostream>
using namespace std;


class student {
    public:
        string n;
        int m;
        int cid;
        student() {
            n = "abc";
            m = 0;
            cid = 0;
    }

        student (int m, int cid, string n) {
            this->m = m;
            this->cid = cid;
            this->n = n;
    }
        void display() {
        cout << "Current marks of the Student: "<< this->m << endl;
        cout << "Name of the Student: "<< n << endl;
        cout << "College ID of the Student: "<< cid << endl;
        }
        void input() {
        cout << "Enter the updated marks of the Student: ";
        cin >> m;

        cout << "Enter updated name of the Student: ";
        cin >> n;

        cout << "Enter updated CollegeID of the Student: ";
        cin >> cid;
        }
};
int main() {

    student s1;
    s1.input();
    s1.display();

    return 0;
}