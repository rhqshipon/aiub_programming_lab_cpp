#include <iostream>
using namespace std;


void output_tracing_1()    {
    double val1 = 5.5;
    int val2 = val1;
    int val3 = val2++;
    double val4 = --val1;
    cout << (int)val1 + (int)val1 << endl;
    cout << val2++ << endl;
    cout << --val3 << endl;
    cout << val4 << endl;
    cout << (double)val3 + val4 << endl;
    cout << (val1 != val4) << endl;
    cout << val1 << "   " << val2 << "   " << val3 << "   " << val4 << endl;
}

void zygote()    {

}

void problem_2()    {
    int row;
    cin >> row;
    for (int i = 1; i <= row; i++)   {
        for (int j = 1; j <= i; j++)     {
            cout << "*";
        }
        cout << endl;
    }
}

void prime_number_checker()    {
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


void even_odd()     {
    int number_of_data_to_store = 7;
    int datastore[number_of_data_to_store], input, iter;
    for ( iter = 0; iter < number_of_data_to_store; iter++ )       {
        cout << "Give me an integer number to check if even or odd: ";
        cin >> datastore[iter];
    }
    for ( iter = 0; iter < number_of_data_to_store; iter++ )       {
        if ( datastore[iter] % 2 == 0 )       {
        cout << "The number " << datastore[iter] << " is even" << endl;
        }
        else    {
            cout << "The number " << datastore[iter] << " is odd" << endl;
        }
    }
}

int main()  {
    //output_tracing_1();
    //problem_2();
    //even_odd();
    //prime_number_checker();
	cout << "" << endl;
    return 0;
}
