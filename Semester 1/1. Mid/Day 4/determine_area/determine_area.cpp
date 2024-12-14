#include <iostream>
using namespace std;

int main()  {
    int choice;
    float area, dimension1, dimension2;
    cout << "What do you want to do?" << endl;
    cout << "[1] Area of Circle" << endl;
    cout << "[2] Area of Square" << endl;
    cout << "[3] Area of Triangle" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch(choice)  {
        case 1 :
            cout << "Give me the radius: ";
            cin >> dimension1;
            area = 3.1416*dimension1*dimension1;
            cout << "The area is: " << area << " square units" << endl;
            break;
        case 2 :
            cout << "Give me the length of dimension: ";
            cin >> dimension1;
            area = dimension1*dimension1;
            cout << "The area is: " << area << " square units" << endl;
            break;
        case 3 :
            cout << "Give me the length of base: ";
            cin >> dimension1;
            cout << "Give me the length of height: ";
            cin >> dimension2;
            area = .5*dimension1*dimension2;
            cout << "The area is: " << area << " square units" << endl;
            break;
        default:
            cout << "Invalid response!" << endl;
    }
    return 0;
}
