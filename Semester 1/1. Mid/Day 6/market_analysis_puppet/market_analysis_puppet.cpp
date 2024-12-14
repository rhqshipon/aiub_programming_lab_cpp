#include <iostream>
using namespace std;


int main()  {
    int days_to_work_with = 7, iteration, days_below_average_sale = 0;
    double datastore[days_to_work_with], input_value, total_sale, average_sale, expected_total_sell = 10000;
    for ( iteration = 0; iteration < days_to_work_with; iteration++ )      {
        cout << "Enter total sell value for day " << iteration + 1 << ": ";
        cin >> datastore[iteration];
    }
    cout << endl;

    for ( iteration = 0; iteration < days_to_work_with; iteration++ )      {
        total_sale += datastore[iteration];
    }
    cout << "Total sale for this week: " << total_sale << endl;
    cout << endl;

    average_sale = total_sale / days_to_work_with;
    cout << "The average sale per day of this week: " << average_sale << endl;
    cout << endl;

    for ( iteration = 0; iteration < days_to_work_with; iteration++ )      {
        if ( datastore[iteration] <= average_sale )      {
            days_below_average_sale++;
        }
    }
    cout << "Number of days below average sale: " << days_below_average_sale << endl;
    cout << endl;

    if ( expected_total_sell >= total_sale )      {
        cout << "Target not achieved!" << endl;
    }
    else    {
        cout << "Target achieved!" << endl;
    }

    cout << endl;
    return 0;
}
