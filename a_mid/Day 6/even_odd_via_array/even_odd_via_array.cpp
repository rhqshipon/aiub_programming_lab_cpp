#include <iostream>
using namespace std;


int main()  {
    int number_of_data_to_store = 7;
    int datastore[number_of_data_to_store], input, iteration;
    for ( iteration = 0; iteration < number_of_data_to_store; iteration++ )       {
        cout << "Give me an integer number to check if even or odd: ";
        cin >> datastore[iteration];
    }
    for ( iteration = 0; iteration < number_of_data_to_store; iteration++ )       {
        if ( datastore[iteration] % 2 == 0 )     {
        cout << "The number " << datastore[iteration] << " is even" << endl;
        }
        else    {
            cout << "The number " << datastore[iteration] << " is odd" << endl;
        }
    }
}
