#include <iostream>
using namespace std;


int main()  {
    int array_size, iteration, even_count = 0, odd_count = 0;
    cout << "How many numbers do you want to work with? ";
    cin >> array_size;
    double dataframe[array_size], maximum, minimum;

    cout << endl;

    for (iteration = 0; iteration < array_size; iteration++)      {
        cout << "Element " << iteration + 1 << ": ";
        cin >> dataframe[iteration];
    }

    maximum = dataframe[0]; minimum = dataframe[0];

    for (iteration = 0; iteration < array_size; iteration++)      {
        if (dataframe[iteration] > maximum)     {
            maximum = dataframe[iteration];
        }
        if (dataframe[iteration] < minimum)     {
            minimum = dataframe[iteration];
        }
        if ((int)dataframe[iteration] % 2 == 0)     {
            even_count++;
        }
        else     {
            odd_count++;
        }
    }
    cout << endl;
    cout << "The maximum value is: " << maximum << endl;
    cout << "The minimum value is: " << minimum << endl;
    cout << "The number of even element: " << even_count << endl;
    cout << "The number of odd element: " << odd_count << endl;
    cout << endl;
    return 0;
}

