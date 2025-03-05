#include <iostream>
using namespace std;

void zygote()    {
    cout << "I really hate C++!" << endl; // But I love Pyhton hehe!
    //return 0;
}

void positive_naki_negative()    {
    int a;
    //a = 10;
    cout << "Please provide me a number: ";
    cin >> a;
    if (a > 0)  {
        cout << "Provided input is positive.";
    }
    else if (a < 0) {
        cout << "Provided input is negative." << endl;
    }
    else    {
        cout << "Provided input is zero!" << endl;
    }
}

void keda_boro_old()    {
    float a, b, c;

    cout << "Please provide me value for a: ";
    cin >> a;
    cout << "\nPlease provide me value for b: ";
    cin >> b;
    cout << "\nPlease provide me value for c: ";
    cin >> c;
    cout << "\n";

    if (a > b)  {
        if (a > c)  {
            cout << "Provided input a is biggest." << endl;
        }
    }
    else if (b > a)  {
        if (b > c)  {
            cout << "Provided input b is biggest." << endl;;
        }
    }
    else if (c > a)  {
        if (c > b)  {
            cout << "Provided input c is biggest." << endl;;
        }
    }
    else    {
        cout << "Internal error!" << endl;
    }
}

void keda_boro()    {
    float a, b, c;

    cout << "Please provide me value for a: ";
    cin >> a;
    cout << "Please provide me value for b: ";
    cin >> b;
    cout << "Please provide me value for c: ";
    cin >> c;
    cout << "\n";
    if (a > b && a > c)     {
        cout << "Provided input a is biggest.";
    }
    else if (b > a && b > c)    {
        cout << "Provided input b is biggest." << endl;
    }
    else if (a == b && b == c && c == a)    {
        cout << "Provided inputs are the same, none are bigger than other." << endl;
    }
    else    {
        cout << "Provided input c is biggest." << endl;
    }
}

void check_my_result()    {
    float number;
    cout << "Please give me the number you want to determine the grade of : ";
    cin >> number;

    if (number >= 90 && number <= 100)   {
        cout << "A+";
    }
    else if (number >= 85 && number <= 89)   {
        cout << "A";
    }
    else if (number >= 80 && number <= 84)   {
        cout << "B+";
    }
    else if (number >= 75 && number <= 79)   {
        cout << "B";
    }
    else if (number >= 70 && number <= 74)   {
        cout << "C+";
    }
    else if (number >= 65 && number <= 69)   {
        cout << "C";
    }
    else if (number >= 60 && number <= 64)   {
        cout << "D+";
    }
    else if (number >= 50 && number <= 59)   {
        cout << "D";
    }
    else if (number >= 0 && number <= 49)   {
        cout << "F" << endl;
        cout << "Congratulations! you got FANTASTIC!    --the_dean";
    }
    else    {
        cout << "Provided input is invalid!" << endl;
    }
}

int main()    {
    //positive_naki_negative();
    keda_boro();
    //check_my_result();
    return 0;
    cout << "" << endl;
}


