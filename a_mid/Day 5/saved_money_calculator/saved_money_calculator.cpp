#include <iostream>
using namespace std;


int main()  {
    double the_bank = 0, saved_money_per_month;
    int month_iteration = 1, total_months_in_a_year = 12;
    for ( month_iteration; month_iteration <= total_months_in_a_year; month_iteration++ )    {
        cout << "Enter the amount you have saved in month " << month_iteration << ": ";
        cin >> saved_money_per_month;
        the_bank += saved_money_per_month;
    }
    cout << "In the last year, you have saved: " << the_bank << endl;
}
