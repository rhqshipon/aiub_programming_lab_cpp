#include <iostream>
using namespace std;


int main()  {
    int array_size, iteration, even_count = 0, odd_count = 0, even_odd_identifier;
    cout << "How many numbers do you want to work with? ";
    cin >> array_size;
    double dataframe[array_size];

    cout << endl;

    for (iteration = 0; iteration < array_size; iteration++)      {
        cout << "Element " << iteration + 1 << ": ";
        cin >> dataframe[iteration];
    }


    for (iteration = 0; iteration < array_size; iteration++)      {
        even_odd_identifier = (int)dataframe[iteration] % 2;
        if (even_odd_identifier == 0)     {
            even_count++;
            dataframe[iteration] = even_odd_identifier;

        }
        else     {
            odd_count++;
            dataframe[iteration] = even_odd_identifier;
        }
    }
    cout << endl;
    cout << "The number of even element: " << even_count << endl;
    cout << "The number of odd element: " << odd_count << endl;
    cout << "Updated Array: ";
    for (iteration = 0; iteration < array_size; iteration++)      {
        cout << dataframe[iteration] << "  ";
    }

    cout << endl;
    return 0;
}

