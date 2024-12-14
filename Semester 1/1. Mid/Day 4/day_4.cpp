#include <iostream>
using namespace std;

void zygote()    {

}

void determine_area()   {
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
}

void grade_message()    {
    char verdict;
    cout << "Tell me the grade letter you want to know the definition of: ";
    cin >> verdict;
    switch(verdict)    {
        case 'A' :
        case 'a' :
            cout << "Excellent!" << endl;
            break;
        case 'B' :
        case 'b' :
            cout << "Good!" << endl;
            break;
        case 'C' :
        case 'c' :
            cout << "Average!" << endl;
            break;
        case 'D' :
        case 'd' :
            cout << "Poor!" << endl;
            break;
        case 'F' :
        case 'f' :
            cout << "Fail!" << endl;
            break;
        default:
            cout << "Invalid response!" << endl;
    }
}

void leap_year()    {
    int year;
    cout << "Provide me the year you want to detect the leap day of: ";
    cin >> year;
    if (year % 4 == 0)    {
        if (year % 100 == 0)   {
            if(year % 400 == 0)    {
                cout << "This is a leap year!";
            }
            else    {
                cout << "This is not a leap year.";
            }
        }
        else    {
            cout << "This is a leap year!";
        }
    }
    else    {
            cout << "This is not a leap year!";
    }
}


int main()    {
    //grade_message();
    //leap_year();
    determine_area();
    cout << "" << endl;
}



