#include <iostream>
using namespace std;


void zygote()    {

}

void triangular_number()    {
    int sum_trinum = 0;
    int max_iteration = 200;
    int running_value = 1;

    cout << "Enter how many iteration to perform: ";
    cin >> max_iteration;

    for ( running_value; running_value <= max_iteration; running_value++ )     {
        sum_trinum = sum_trinum + running_value;
    }
    cout << "The " << max_iteration << "th triangular number: " << sum_trinum << endl;
}

void total_price_for_market()    {
    int price, quantity, total_cost = 0;
    while(true) {
        cout << "Enter the price of an item: ";
        cin >> price;
        if ( price < 0 )    {
            break;
        }
        cout << "Enter the quantity: ";
        cin >> quantity;
        total_cost += price * quantity;
    }
    cout << "Total price: " << total_cost << endl;
}

average_terperature_and_humidity()     {
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

void fibonacci_series()    {
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
    cout << "Summition of the fibonacci series: " << sum_of_fibonacci - 1 << endl;
}

void average_grade_calculator()    {
    double sum_grades = 0, grade_input, average;
    int desired_iteration = 5, iteration = 1;
    for ( iteration; iteration <= desired_iteration; iteration++ )   {
        cout << "Enter the grade for student " << iteration << ": ";
        cin >> grade_input;
        sum_grades += grade_input;
    }
    iteration -= 1;
    average = sum_grades / iteration;
    cout << "The average grade for the provided " << iteration << " students: " << average << endl;
}

void saved_money_calculator()    {
    double the_bank = 0, saved_money_per_month;
    int month_iteration = 1, total_months_in_a_year = 12;
    for ( month_iteration; month_iteration <= total_months_in_a_year; month_iteration++ )    {
        cout << "Enter the amount you have saved in month " << month_iteration << ": ";
        cin >> saved_money_per_month;
        the_bank += saved_money_per_month;
    }
    cout << "In the last year, you have saved: " << the_bank << endl;
}

int main()  {
    //zygote();
    //triangular_number();
    //total_price_for_market();
    //average_grade_calculator();
    //saved_money_calculator();
    average_terperature_and_humidity();
	cout << "" << endl;
    return 0;
}
