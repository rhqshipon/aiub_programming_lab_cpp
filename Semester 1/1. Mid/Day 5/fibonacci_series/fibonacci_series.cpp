#include <iostream>
using namespace std;


int main()  {
    int first_fibonacci_element = 0;
    int second_fibonacci_element = 1;
    int sum_of_fibonacci, desired_iteration, iteration = 1;
    cout << "For how many elements from the first element: ";
    cin >> desired_iteration;
    for ( iteration; iteration <= desired_iteration; iteration++ )     {
        sum_of_fibonacci = first_fibonacci_element + second_fibonacci_element;
        first_fibonacci_element = second_fibonacci_element;
        second_fibonacci_element = sum_of_fibonacci;
    }
    cout << "Summation of the fibonacci series: " << sum_of_fibonacci - 1 << endl;
}
