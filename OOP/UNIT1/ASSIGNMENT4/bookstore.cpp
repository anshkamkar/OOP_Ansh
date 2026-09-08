#include <iostream>
using namespace std;
class book {
    public:
        string name;
        int isbn;
        float price;
        string auth;

        book () {
            name = "Book Title";
            auth = "Author Name";
            isbn = 0;
            price = 0.0;
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

    cout << "Enter Book Name: "  << endl;
    cin >> b1.name;

    cout << "Enter Author Name: " << endl;
    cin >> b1.auth;

    cout << "Enter ISBN Code: " << endl;
    cin >> b1.isbn;

    cout << "Enter Price: " << endl;
    cin >> b1.price;

    cout << endl;
    cout << endl;
    b1.display();

   
    return 0;

}

