#include <iostream>
using namespace std;

int main()  {
    int age;
    cout << "Provide me your age: ";
    cin >> age;
    if( age >= 18)    {
        cout << "Congratulations! You are eligible for vote :)" << endl;
    }
    else    {
        cout << "Sorry! You are not eligible for vote :(" << endl;
    }
    return 0;
}
