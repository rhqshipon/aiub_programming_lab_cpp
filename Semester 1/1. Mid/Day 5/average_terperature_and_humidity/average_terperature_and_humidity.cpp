#include <iostream>
using namespace std;


int main()  {
    double total_temperature, total_humidity, average_temperature, average_humidity, input_temperature, input_humidity;
    int days = 5, days_counter = 1;
    for ( days_counter; days_counter <= days; days_counter++ )     {
        cout << "" << endl;
        cout << "Enter temperature for day " << days_counter << ": ";
        cin >> input_temperature;
        cout << "Enter humidity for day " << days_counter << "   : ";
        cin >> input_humidity;
        total_temperature += input_temperature;
        total_humidity += input_humidity;
    }
    days_counter -= 1;
    average_temperature = total_temperature / days_counter;
    average_humidity = total_humidity / days_counter;
    cout << "" << endl;
    cout << "The average temperature for the past " << days_counter << " days is: " << average_temperature << endl;
    cout << "The average humidity for the past " << days_counter << " days is   : " << average_humidity << endl;
}
