#include <iostream>
using namespace std;


int main()  {
    int minimum_range, maximum_range, is_prime, limited_divisor, input_value, element_counter, indexer = 0, iteration;
    cout << "Enter the minimum of range: ";
    cin >> minimum_range;
    cout << "Enter the maximum of range: ";
    cin >> maximum_range;

    if (maximum_range < minimum_range)      {
        cout << "Maximum number can't be less than the minimum number! Exiting!" << endl;
        exit(1);
    }

    element_counter = maximum_range - minimum_range;
    int prime_datastore[element_counter];

    for (minimum_range; minimum_range < maximum_range; minimum_range++)     {
        input_value = minimum_range;
        is_prime = 1;

        if (input_value < 2)    {
            is_prime = 0;
        }

        for (limited_divisor = 2; limited_divisor < input_value; limited_divisor++)   {
            if (input_value % limited_divisor == 0)    {
                is_prime = 0;
                break;
            }
        }

        if (is_prime == 1)    {
            prime_datastore[indexer] = minimum_range;
            indexer++;
        }
    }

    cout << "The prime numbers in your given range is:";

    for (iteration = 0; iteration < indexer; iteration++)     {
        cout << " " << prime_datastore[iteration];
    }
    cout << endl;
}
