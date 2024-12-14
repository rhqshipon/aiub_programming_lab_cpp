#include <iostream>
using namespace std;

int main()  {
    int a;
    //a = 10;
    cout << "Please provide me a number: ";
    cin >> a;
    if (a > 0)  {
        cout << "Provided input is positive.";
    }
    else if (a < 0) {
        cout << "Provided input is negative." << endl;
    }
    else    {
        cout << "Provided input is zero!" << endl;
    }
    return 0;
}
