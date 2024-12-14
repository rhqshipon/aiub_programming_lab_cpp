#include <iostream>
using namespace std;

int main()  {
    float value1, value2;
    char operatorr;
    cout << "Type in your expression: " << endl;
    cin >> value1 >> operatorr >> value2;
    if (operatorr == '+')    {
        cout << "       " << value1 + value2 << endl;
    }
    else if (operatorr == '-')    {
        cout << "       " << value1 - value2 << endl;
    }
    else if (operatorr == '*')    {
        cout << "       " << value1 * value2 << endl;
    }
    else if (operatorr == '/')    {
        cout << "       " << value1 / value2 << endl;
    }
    else    {
        cout << "Only +, -, *, / operations are supported!" << endl;
    }
    return 0;
}
