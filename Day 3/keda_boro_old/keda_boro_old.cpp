#include <iostream>
using namespace std;

int main()  {
    float a, b, c;

    cout << "Please provide me value for a: ";
    cin >> a;
    cout << "\nPlease provide me value for b: ";
    cin >> b;
    cout << "\nPlease provide me value for c: ";
    cin >> c;
    cout << "\n";

    if (a > b)  {
        if (a > c)  {
            cout << "Provided input a is biggest." << endl;
        }
    }
    else if (b > a)  {
        if (b > c)  {
            cout << "Provided input b is biggest." << endl;;
        }
    }
    else if (c > a)  {
        if (c > b)  {
            cout << "Provided input c is biggest." << endl;;
        }
    }
    else    {
        cout << "Internal error!" << endl;
    }
    return 0;
}
