#include <iostream>
using namespace std;


void bmi_print(double bmi)  {
    cout << "BMI: " << bmi << endl;
    cout << "Status: ";
    if (bmi < 18.5)    {
        cout << "Underweight" << endl;
    }
    else if (bmi >= 18.5 && bmi <= 24.9)    {
        cout << "Normal weight" << endl;
    }
    else if (bmi >= 25 && bmi <= 29.9)    {
        cout << "Overweight" << endl;
    }
    else if (bmi >= 30)    {
        cout << "Obesity" << endl;
    }
    else    {
        cout << "Cannot determine BMI status! Internal error!" << endl;
    }
}

void calculate_bmi(double weight, double height)     {
    double bmi =  (weight / (height * height));
    bmi_print(bmi);
}

int main()  {
    double weight, height;
    cout << "Enter Weight (in KG): ";
    cin >> weight;
    cout << "Enter Height (in Meters): ";
    cin >> height;
    calculate_bmi(weight, height);

}
