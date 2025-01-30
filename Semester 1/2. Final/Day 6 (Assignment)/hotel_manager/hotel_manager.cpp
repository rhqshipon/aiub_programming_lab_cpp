#include <iostream>
#include <string>
using namespace std;

struct Room{
    int roomNumber;
    string roomType;
    double pricePerNight;
    bool isAvailable;

    void setDetails(int roomnumber, string roomtype, double pricepernight, bool isavailable)     {
        roomNumber = roomnumber;
        roomType = roomtype;
        pricePerNight = pricepernight;
        isAvailable = isavailable;
    }

    void displayDetails()     {
        cout << "Room Number: " << roomNumber << endl;
        cout << "Room Type: " << roomType << endl;
        cout << "Price Per Night: " << pricePerNight << endl;
    }

    void bookRoom(int nights)    {
        double totalPrice = pricePerNight*nights;
        cout << "Total Price For Booking The Room: " << totalPrice << endl;
        cout << "Availability: ";

        if (isAvailable)    {
            cout << "Available" << endl;
        }
        else    {
            cout << "The room is already booked!" << endl;
        }

    }
};

int main()  {
    Room r1, r2;
    r1.setDetails(101, "Single", 500, true);
    r2.setDetails(102, "Double", 1000, false);

    r1.displayDetails();
    r1.bookRoom(3);

    cout << endl;

    r2.displayDetails();
    r2.bookRoom(3);
}
