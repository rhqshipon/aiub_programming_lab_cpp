#include <iostream>
using namespace std;


int main()  {
    int days_in_a_month, limited_usage, maximum_usage_day, day_capturer, iteration;
    cout << "Enter the days for a month you want to work on: ";
    cin >> days_in_a_month;
    double usage_within_the_timeframe[days_in_a_month], total_usage, maximum, minimum;
    for (iteration = 0; iteration < days_in_a_month; iteration++)      {
        cout << "Enter the electricity usage (in kWh) for day " << iteration + 1 << ": ";
        cin >> usage_within_the_timeframe[iteration];
    }
    cout << endl;
    maximum = usage_within_the_timeframe[0];
    for (iteration = 0; iteration < days_in_a_month; iteration++)      {
        if (usage_within_the_timeframe[iteration] > maximum)     {
            maximum = usage_within_the_timeframe[iteration];
            maximum_usage_day = iteration + 1;
        }
        total_usage += usage_within_the_timeframe[iteration];
    }
    cout << "Total electricity usage for this month (in kWh): " << total_usage << endl;
    cout << "The highest electricity usage was (in kWh) in day " << maximum_usage_day << ": " << maximum << endl;
    cout << endl;
    cout << "Enter the maximum range on which the occured amount of days to be counted of (in kWh): ";
    cin >> limited_usage;
    for (iteration = 0; iteration < days_in_a_month; iteration++)     {
        if (usage_within_the_timeframe[iteration] < limited_usage)     {
            day_capturer++;
        }
    }
    cout << "Amount of days on which electricity was overused: " << day_capturer << endl;
}
