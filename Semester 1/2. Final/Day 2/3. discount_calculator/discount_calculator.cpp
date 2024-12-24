#include <iostream>
using namespace std;


void discount_calculator()     {
    double input_price, discount_price;
    cout << "Enter Original Price (in BDT): ";
    cin >> input_price;
    if (input_price < 500)    {
        discount_price = input_price * 0;
    }
    else if (input_price >= 500 && input_price <= 1000)    {
        discount_price = input_price * .10;
    }
    else if (input_price > 1000)    {
        discount_price = input_price * .20;
    }
    else    {
        cout << "Internal error while calculating discount!" << endl;
    }
    cout << "Discount Amount (in BDT): " << discount_price << endl;
    cout << "Final Price: " << input_price - discount_price << endl;
}

int main()  {
    discount_calculator();
}
