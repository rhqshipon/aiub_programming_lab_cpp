#include <iostream>
using namespace std;


void zygote()    {
    float base_price = 50;
    float days_remaining;
    cout << "How many days are remaining from the event? ";
    cin >> days_remaining;
    if ( days_remaining > 30 )     {
        cout << "You're eligible for 20% discount! Please pay $" << base_price*.80 << "!";
    }
    else if ( days_remaining < 5 )     {
        cout << "You're eligible for 10% discount! Please pay $" << base_price*.90 << "!";
    }
    else     {
        cout << "Sorry! You are not eligible for any discount. Please pay $" << base_price << "!";
    }
    cout << "" << endl;
}

void early_bird_polished()    {
    float base_price = 50;
    float date;
    // Let's think the event is in 31st of December and we are in 1st of December.
    cout << "Please give today's date: ";
    cin >> date;
    if ( date <= 1 )     {
        cout << "You're eligible for 20% discount! Please pay $" << base_price*.80 << "!";
    }
    else if ( date > 25 )     {
        cout << "You're eligible for 10% discount! Please pay $" << base_price*.90 << "!";
    }
    else     {
        cout << "Sorry! You are not eligible for any discount. Please pay $" << base_price << "!";
    }
    cout << "" << endl;
}

int main()  {
    //zygote();
    early_bird_polished();
	cout << "" << endl;
    return 0;
}
