#include <iostream>
using namespace std;

double circle(double radius)    {
    double area = 3.1416*radius*radius;
    return area;
}

double square(double dimension1)    {
    double area = dimension1*dimension1;
    return area;
}

double triangle(double dimension1, double dimension2)    {
    double area = .5*dimension1*dimension2;
    return area;
}

void area_orchestrator()    {
    int choice;
    double dimension1, dimension2;
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
            cout << "The area is: " << circle(dimension1) << " square units" << endl;
            break;
        case 2 :
            cout << "Give me the length of dimension: ";
            cin >> dimension1;
            //area = dimension1*dimension1;
            cout << "The area is: " << square(dimension1) << " square units" << endl;
            break;
        case 3 :
            cout << "Give me the length of base: ";
            cin >> dimension1;
            cout << "Give me the length of height: ";
            cin >> dimension2;
            cout << "The area is: " << triangle(dimension1, dimension2) << " square units" << endl;
            break;
        default:
            cout << "Error: Invalid choice. Exiting!" << endl;
    }
}

int main()  {
    area_orchestrator();
    return 0;
}
