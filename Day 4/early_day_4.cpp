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

int main()    {
    //check_integer_or_odd();
    eligibility_for_vote();
    cout << "" << endl;
}



