#include <iostream>
using namespace std;


struct car   {
    int id;
    char brand[50];
    char model[100];
    double price;
};


int main()  {
    car c1, c2;


    cout << "Insert information of Car 1," << endl;

    cout << "Enter Car ID: ";
    cin >> c1.id;
    cin.ignore();

    cout << "Enter Car Brand: ";
    cin.getline(c1.brand, 50);

    cout << "Enter Car Model: ";
    cin.getline(c1.model, 100);

    cout << "Enter Car Price: ";
    cin >> c1.price;

    cout << endl;
    cout << endl;

    cout << "Insert information of Car 2," << endl;

    cout << "Enter Car ID: ";
    cin >> c2.id;
    cin.ignore();

    cout << "Enter Car Brand: ";
    cin.getline(c2.brand, 50);

    cout << "Enter Car Model: ";
    cin.getline(c2.model, 100);

    cout << "Enter Car Price: ";
    cin >> c2.price;


    cout << endl;
    cout << endl;
    cout << endl;


    cout << "Stored information of Car 1," << endl;
    cout << "Car ID: " << c1.id << endl;
    cout << "Car Brand: " << c1.brand << endl;;
    cout << "Car Model: " << c1.model << endl;
    cout << "Car Price: " << c1.price << endl;

    cout << endl;
    cout << endl;

    cout << "Stored information of Car 2," << endl;
    cout << "Car ID: " << c2.id << endl;
    cout << "Car Brand: " << c2.brand << endl;;
    cout << "Car Model: " << c2.model << endl;
    cout << "Car Price: " << c2.price << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
}
