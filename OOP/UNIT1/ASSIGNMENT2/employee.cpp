
// The HR department needs a simple app to organize employee info. 
// Design an employee class that stores employee details and enables authorized 
// staff to view the stored info whenever required.

#include <iostream>
using namespace std;
class employee {
    public:
        string name, email;
        int num;
        string auth;
        string authO = "auth@9715";

        void input(){
            

            cout << "Enter Employee Name: ";
            getline(cin, name);
            
            cin.ignore();
            cout << "Enter Employee EmailID: ";
            getline(cin, email);
        
            cin.ignore();
            cout << "Enter Employee Phone Number: ";
            cin >> num;
        }

        void display(){
           cout << "Enter Password to view details of employee: ";
           cin >> auth;

           if (auth == authO){
            cout << "Employee Name: " << name << endl;
            cout << "Employee Email ID: " << email << endl;
            cout << "Employee Phone Number: " << num << endl;

           }
           else {
            cout << "Access Denied" << endl;
           }
        }
};

int main() {
    employee e1;

   
   e1.input();

   cout << endl;
   cout << endl;

    e1.display();

    return 0;

}
