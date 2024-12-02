#include <iostream>
using namespace std;

int main()  {
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
    return 0;
}
