#include <iostream>
using namespace std;

double addition(double a, double b)    {
    double result = a + b;
    return result;
}

double substraction(double a, double b)    {
    double result = a - b;
    return result;
}

double multliplication(double a, double b)    {
    double result = a * b;
    return result;
}

double division(double a, double b)    {
    if(b == 0)    {
        double result = a / b;
        return result;
    }
    else   {
        cout << "Error: Can't divide by 0!" << endl;
        return 1;
    }
}

double modulo(double a, double b)    {
    if(b == 0)    {
        int result = (int)a % (int)b;
        return result;
    }
    else   {
        cout << "Error: Can't divide by 0!" << endl;
        return 1;
    }
}

void calculator()    {
    int choice;
    double val1, val2;
    cout << "[1] Addition" << endl;
    cout << "[2] Substraction" << endl;
    cout << "[3] Multiplication" << endl;
    cout << "[4] Division" << endl;
    cout << "[5] Modulo" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter Value 1: ";
    cin >> val1;
    cout << "Enter Value 2: ";
    cin >> val2;

    cout << endl;
    cout << "Result: ";
    switch(choice)     {
        case 1:
            cout << addition(val1, val2);
            break;
        case 2:
            substraction(val1, val2);
            break;
        case 3:
            multliplication(val1, val2);
            break;
        case 4:
            division(val1, val2);
            break;
        case 5:
            modulo(val1, val2);
            break;
        default:
            cout << "Error: Invalid input. Exiting!";
            break;
    }
    cout << endl;
}

int main()  {
    calculator();
}
