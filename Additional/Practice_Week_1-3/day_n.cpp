#include <iostream>
using namespace std;


void zygote()    {

}

void calculate_the_speed()    {
    double distance, time;
    cout << "MAKE SURE TO FOLLOW A SPECIFIC UNIT METRIC SYSTEM WHILE PROVIDONG VALUES. ELSE, YOU'LL GET WRONG ANSWER(S)! \n" << endl;
    cout << "Enter the distance passed: ";
    cin >> distance;
    cout << "Enter the time required to pass the distance: ";
    cin >> time;
    cout << "Approximate speed: " << distance*time << endl;
}

void name_of_the_day_of_the_week()    {
    int index_of_day;
    cout << "Enter the index of day to know the name of: ";
    cin >> index_of_day;
    cout << "It's ";
    switch (index_of_day)   {
        case 1:
            cout << "Saturday" << endl;
            break;
        case 2:
            cout << "Sunday" << endl;
            break;
        case 3:
            cout << "Monday" << endl;
            break;
        case 4:
            cout << "Tuesday" << endl;
            break;
        case 5:
            cout << "Wednesday" << endl;
            break;
        case 6:
            cout << "Thursday" << endl;
            break;
        case 7:
            cout << "Friday" << endl;
            break;
        default:
            cout << "an invalid choice!" << endl;
            break;
    }
}

void check_for_discount()    {
    double purchased_amount;
    cout << "Enter the amount of which you wished to purchase: ";
    cin >> purchased_amount;
    if (purchased_amount > 1000)     {
        cout << "Discounted price: " << purchased_amount*0.90 << endl;
    }
    else {
        cout << "No discount" << endl;
    }
}

void whos_larger_using_array()     {
    int index_num, iteration;
    cout << "Enter the amount of numbers you're trying to work on: ";
    cin >> index_num;
    double dataframe[index_num], maximum;
    for (iteration = 0; iteration < index_num; iteration++)     {
        cout << "Enter value " << iteration + 1 << ": ";
        cin >> dataframe[iteration];
    }
    double minimum = dataframe[0];
    for (iteration = 0; iteration < index_num; iteration++)     {
        if (dataframe[iteration] > maximum)     {
            maximum = dataframe[iteration];
        }
        if (dataframe[iteration] < minimum)     {
            minimum = dataframe[iteration];
        }
    }
    cout << endl;
    cout << "Maximum value: " << maximum << endl;
    cout << "Minimum value: " << minimum << endl;
}

int main()    {
    //whos_larger_using_array();
    //check_for_discount();
    name_of_the_day_of_the_week();
    //calculate_the_speed();
    //zygote();
	cout << "" << endl;
    return 0;
}
