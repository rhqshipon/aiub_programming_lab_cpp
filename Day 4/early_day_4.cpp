#include <iostream>
using namespace std;

void zygote()    {

}

void check_integer_or_odd() {
    int input;
    cout << "Provide me a value for 'a': ";
    cin >> input;
    if ( input % 2 == 0)    {
        cout << "even" << endl;
    }
    else    {
        cout << "odd" << endl;
    }
}

void eligibility_for_vote()    {
    int age;
    cout << "Provide me your age: ";
    cin >> age;
    if( age >= 18)    {
        cout << "Congratulations! You are eligible for vote :)" << endl;
    }
    else    {
        cout << "Sorry! You are not eligible for vote :(" << endl;
    }
}

void check_if_leap_year_old()   {
    int year;
    cout << "Provide me the year: ";
    cin >> year;
    if( year % 4 == 0 && year % 100 != 0 )  {
        cout << "This is a leap year!" << endl;
    }
    else if( year % 100 == 0 && year % 400 != 0 )   {
        cout << "This is not a leap year!" << endl;
    }
    else    {
        cout << "This is not a leap year!" << endl;
    }
}

bool isLeapYear(int year) {
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				return true; // Divisible by 400, so it's a leap year
			}
			else {
				return false; // Divisible by 100 but not 400, not a leap year
			}
		}
		else {
			return true; // Divisible by 4 but not by 100, so it's a leap year
		}
	}
	else {
		return false; // Not divisible by 4, not a leap year
	}
}


void check_if_leap_year()   {
    int year;
	cout << "Enter a year: ";
	cin >> year;

	if (isLeapYear(year)) {
		cout << year << " is a leap year." << endl;
	} else {
		cout << year << " is not a leap year." << endl;
	}
}

void calculator()   {
    float value1, value2;
    char operatorr;
    cout << "Type in your expression: " << endl;
    cin >> value1 >> operatorr >> value2;
    if (operatorr == '+')    {
        cout << "       " << value1 + value2 << endl;
    }
    else if (operatorr == '-')    {
        cout << "       " << value1 - value2 << endl;
    }
    else if (operatorr == '*')    {
        cout << "       " << value1 * value2 << endl;
    }
    else if (operatorr == '/')    {
        cout << "       " << value1 / value2 << endl;
    }
    else    {
        cout << "Only +, -, *, / operations are supported!" << endl;
    }
}

void calculator_new()   {
    float value1, value2;
    char operatorr;
    cout << "Type in your 1st value: ";
    cin >> value1;
    cout << "Type in your 2nd value: ";
    cin >> value2;
    cout << "Type in your expression: " << endl;
    cin >> operatorr;
    switch(operatorr)    {
        case '+' :
            cout << "       Answer: " << value1 + value2 << endl;
            break;
        case '-' :
            cout << "       Answer: " << value1 - value2 << endl;
            break;
        case '*' :
            cout << "       Answer: " << value1 * value2 << endl;
            break;
        case '/' :
            if( value2 != 0 )   {
                cout << "       Answer: " << value1 / value2 << endl;
            }
            else    {
                cout << "       Error: Division by zero is undefined." << endl;
            }
            break;
        case '%' :
            if( value2 != 0 )   {
                cout << "       Answer: " << (int) value1 % (int) value2 << endl;
            }
            else    {
                cout << "       Error: Modulo by zero is undefined." << endl;
            }
            break;
        default :
            cout << "   Error: Only +, -, *, /, % operations are supported!" << endl;
    }
}

int main()    {
    //check_integer_or_odd();
    //check_if_leap_year();
    //eligibility_for_vote();
    //calculator();
    calculator_new();
    cout << "" << endl;
}



