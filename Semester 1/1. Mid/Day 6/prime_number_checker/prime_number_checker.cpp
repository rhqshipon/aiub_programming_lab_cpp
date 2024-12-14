#include <iostream>
using namespace std;


int main()  {
    int limited_divisor = 2, input_value, is_prime = 1;
    cout << "Enter the number you want to check the prime number for: ";
    cin >> input_value;
    if (input_value < 2)    {
        is_prime = 0;
    }
    for (limited_divisor; limited_divisor < input_value; limited_divisor++)   {
        if (input_value % limited_divisor == 0)    {
            is_prime = 0;
            break;
        }
    }
    if (is_prime == 1)    {
        cout << "Congrats! " << input_value << " is a prime number!" << endl;
    }
    else    {
        cout << "Sorry! " << input_value << " is not a prime number!" << endl;
    }
}
