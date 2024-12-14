#include <iostream>
using namespace std;

int main()  {
    float value1, value2;
    char operatorr;
    cout << "Type in your 1st value: ";
    cin >> value1;
    cout << "Type in your 2nd value: ";
    cin >> value2;
    cout << "Type in your expression: " << endl;
    cin >> operatorr;
    switch(operatorr)    {
        case '+' :
            cout << "       Answer: " << value1 + value2 << endl;
            break;
        case '-' :
            cout << "       Answer: " << value1 - value2 << endl;
            break;
        case '*' :
            cout << "       Answer: " << value1 * value2 << endl;
            break;
        case '/' :
            if( value2 != 0 )   {
                cout << "       Answer: " << value1 / value2 << endl;
            }
            else    {
                cout << "       Error: Division by zero is undefined." << endl;
            }
            break;
        case '%' :
            if( value2 != 0 )   {
                cout << "       Answer: " << (int) value1 % (int) value2 << endl;
            }
            else    {
                cout << "       Error: Modulo by zero is undefined." << endl;
            }
            break;
        default :
            cout << "   Error: Only +, -, *, /, % operations are supported!" << endl;
    }
    return 0;
}
