#include <iostream>
using namespace std;


int main()  {
    double sum_grades = 0, grade_input, average;
    int desired_iteration = 5, iteration = 1;
    for ( iteration; iteration <= desired_iteration; iteration++ )   {
        cout << "Enter the grade for student " << iteration << ": ";
        cin >> grade_input;
        sum_grades += grade_input;
    }
    iteration -= 1;
    average = sum_grades / iteration;
    cout << "The average grade for the provided " << iteration << " students: " << average << endl;
	cout << "" << endl;
    return 0;
}
