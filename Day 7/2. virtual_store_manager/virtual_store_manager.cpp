#include <iostream>
using namespace std;


int main()  {
    int choice;
    double quantity;
    cout << "What do you want to buy today?" << endl;
    cout << "[1] Coffee - $2.50" << endl;
    cout << "[2] Tea - $1.50" << endl;
    cout << "[3] Soda - $1.75" << endl;
    cout << "[4] Water - $1.00" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << endl;

    switch(choice)      {
        case 1 :
            cout << "How many cup of Coffee do you need? ";
            cin >> quantity;
            cout << "Please pay $" << 2.50 * quantity << endl;
            break;

        case 2 :
            cout << "How many cup of Tea do you need? ";
            cin >> quantity;
            cout << "Please pay $" << 1.50 * quantity << endl;
            break;

        case 3 :
            cout << "How many can of Soda do you need? ";
            cin >> quantity;
            cout << "Please pay $" << 1.75 * quantity << endl;
            break;

        case 4 :
            cout << "How many bottle of Water do you need? ";
            cin >> quantity;
            cout << "Please pay $" << 1.00 * quantity << endl;
            break;

        default:
            cout << "Invalid selection. Please try again." << endl;
            break;
    }
    cout << endl;
    return 0;
}
