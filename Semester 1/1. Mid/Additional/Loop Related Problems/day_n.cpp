#include <iostream>
using namespace std;


void zygote()    {

}

void patterns()    {
    int choice, i = 1, j, k, definer = 65, limit, saperator = 5;
    cout << "[1] A on upright pyramid" << endl;
    cout << "[2] 1 to 5 on upright pyramid" << endl;
    cout << "[3] 1 to 5 on downright pyramid" << endl;
    cout << "[4] * on upright pyramid" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout << endl;
    switch (choice)    {
        case 1:
            limit = definer + saperator;
            for (definer; definer < limit; definer++)     {
                for (k = 0; k <= (((saperator - i)*2) + 8); k++)    {
                    cout << " ";
                }
                for (j = 0; j < i; j++)     {
                    cout << "   " << (char)definer;
                }
                i += 2;
                cout << endl;
            }
            break;
        case 2:
            for (i; i <= saperator; i++)    {
                for (k = 0; k <= (((saperator - i)*2) - 1); k++)    {
                    cout << " ";
                }
                for (j = 0; j < i; j++)     {
                    cout  << "   " << j + 1;
                }
                cout << endl;
            }
            break;
        case 3:
            for (i = 5; i >= saperator - saperator; i--)    {
                for (k = 0; k <= (((saperator - i)*2) - 1); k++)    {
                    cout << " ";
                }
                for (j = 0; j < i; j++)     {
                    cout << "   " << j + 1;
                }
                cout << endl;
            }
            break;
        case 4:
            for (i; i <= saperator + 3; i += 2)    {
                for (j = 0; j < i; j++)     {
                    cout << "" << "*";
                }
                cout << endl;
            }
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
}

void fibonacci_series_new()    {
    double first_fibonacci_element = 0, second_fibonacci_element = 1, first_fibonacci_element_backup, sum_of_fibonacci;
    int desired_iteration, iteration = 1;
    cout << "For how many elements from the first element: ";
    cin >> desired_iteration;
    cout << "Fibonacci series for the defined range is: ";
    cout << first_fibonacci_element;
    for ( iteration; iteration <= desired_iteration; iteration++ )     {
        sum_of_fibonacci = first_fibonacci_element + second_fibonacci_element;
        first_fibonacci_element_backup = first_fibonacci_element;
        first_fibonacci_element = second_fibonacci_element;
        second_fibonacci_element = sum_of_fibonacci;
        cout << ", " << first_fibonacci_element_backup;
    }
    cout << endl;
    cout << "Summation of the fibonacci series: " << sum_of_fibonacci - 1 << endl;
}

void multiplication_table()    {
    double constant_factor;
    int i = 0, limit = 20;
    cout << "The number you wish to see the multiplication table of: ";
    cin >> constant_factor;
    cout << endl;
    for (i; i < limit; i++)    {
        cout << "\t" << constant_factor << " X " << i + 1 << " = " << constant_factor * (i + 1) << endl;;
    }
}

int main()    {
    multiplication_table();
    //fibonacci_series_new();
    //patterns();
    //zygote();
	cout << "" << endl;
    return 0;
}
