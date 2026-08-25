#include <iostream>
using namespace std;
class book {
    public:
        string name;
        int isbn, price;
        string auth;

        void input(){
            cout << "Enter Book Name: ";
            cin >> name;
        
            cout << "Enter Author Name: ";
            cin >> auth;
        
        
            cout << "Enter Book ISBN: ";
            cin >> isbn;
        
            cout << "Enter Book Price: ";
            cin >> price;
        
        }

        void display(){
            cout << "Book Name:  " << name << endl;
            cout << "Author Name: " << auth << endl;
            cout << "ISBN Code: " << isbn << endl;
            cout << "Price: " << price << endl;
        }
};

int main() {
    book b1;
    book b2;

   
   b1.input();
   cout << endl;
   b2.input();

   cout << endl;
   cout << endl;

    b1.display();
    cout << endl;
    b2.display();

    return 0;

}

