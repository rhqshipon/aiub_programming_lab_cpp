#include <iostream>
#include <string.h>
using namespace std;


void vehicle_rental_system()    {
    char vehicle_type[7];
    int number_of_days;
    cout << "Enter Vehicle Type: ";
    cin >> vehicle_type;
    cout << "Number of Days: ";
    cin >> number_of_days;
    if (strcmp(vehicle_type, "Car") == 0) {
            cout << "Total Cost: Rs. " << 500 * number_of_days;
    }
    else if (strcmp(vehicle_type, "Bike") == 0) {
        cout << "Total Cost: Rs. " << 300 * number_of_days;
    }
    else if (strcmp(vehicle_type, "Bicycle") == 0) {
        cout << "Total Cost: Rs. " << 100 * number_of_days;
    }
    else {
        cout << "Error: Invalid vehicle type!";
    }
    cout << endl;
}

int main()  {
    vehicle_rental_system();
}
