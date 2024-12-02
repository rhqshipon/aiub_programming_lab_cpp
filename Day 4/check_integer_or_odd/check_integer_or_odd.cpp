#include <iostream>
using namespace std;

int main()  {
    int input;
    cout << "Provide me a value for 'a': ";
    cin >> input;
    if ( input % 2 == 0)    {
        cout << "even" << endl;
    }
    else    {
        cout << "odd" << endl;
    }
    return 0;
}
