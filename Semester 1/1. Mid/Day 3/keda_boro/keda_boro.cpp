#include <iostream>
using namespace std;

int main()  {
    float a, b, c;

    cout << "Please provide me value for a: ";
    cin >> a;
    cout << "Please provide me value for b: ";
    cin >> b;
    cout << "Please provide me value for c: ";
    cin >> c;
    cout << "\n";
    if (a > b && a > c)     {
        cout << "Provided input a is biggest.";
    }
    else if (b > a && b > c)    {
        cout << "Provided input b is biggest." << endl;
    }
    else if (a == b && b == c && c == a)    {
        cout << "Provided inputs are the same, none are bigger than other." << endl;
    }
    else    {
        cout << "Provided input c is biggest." << endl;
    }
    return 0;
}
