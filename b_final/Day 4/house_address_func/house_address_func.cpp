#include <iostream>
using namespace std;

struct address {
    int houseNumber;
    char streetName[200];
    char city[50];
};

int main() {
    address a1, a2;

    cout << "Insert information of House 1," << endl;

    cout << "Enter House Number: ";
    cin >> a1.houseNumber;
    cin.ignore();

    cout << "Enter Street Name: ";
    cin.getline(a1.streetName, 200);

    cout << "Enter City: ";
    cin.getline(a1.city, 50);

    cout << endl;

    cout << "Insert information of House 2," << endl;

    cout << "Enter House Number: ";
    cin >> a2.houseNumber;
    cin.ignore();

    cout << "Enter Street Name: ";
    cin.getline(a2.streetName, 200);

    cout << "Enter City: ";
    cin.getline(a2.city, 50);

    cout << endl;

    cout << "Stored information of House 1," << endl;
    cout << "House Number: " << a1.houseNumber << endl;
    cout << "Street Name: " << a1.streetName << endl;
    cout << "City: " << a1.city << endl;

    cout << endl;

    cout << "Stored information of House 2," << endl;
    cout << "House Number: " << a2.houseNumber << endl;
    cout << "Street Name: " << a2.streetName << endl;
    cout << "City: " << a2.city << endl;

    return 0;
}
