#include <iostream>
using namespace std;


int main()      {
	int customer_count, iteration;
	cout << "How many customers served today? ";
	cin >> customer_count;
	double customer_waiting_time_database[customer_count], total_waiting_time = 0, average_waiting_time = 0, maximum_time = 0;
	for (iteration = 0; iteration < customer_count; iteration++)    {
	    cout << "Enter the waiting time of customer " << iteration + 1 << " (in minutes): ";
	    cin >> customer_waiting_time_database[iteration];
	    total_waiting_time += customer_waiting_time_database[iteration];
	}

	average_waiting_time = total_waiting_time/customer_count;
	cout << endl;
	cout << "Total waiting time (in minutes): " << total_waiting_time << endl;
	cout << "Average waiting time (in minutes): " << average_waiting_time << endl;
    cout << endl;
	for (iteration = 0; iteration < customer_count; iteration++)    {
        if (customer_waiting_time_database[iteration] > average_waiting_time)      {
            cout << "The customer " << iteration + 1 << " waited more than the average waiting time (in minutes): " << customer_waiting_time_database[iteration] << endl;
        }
	}
	return 0;
}
