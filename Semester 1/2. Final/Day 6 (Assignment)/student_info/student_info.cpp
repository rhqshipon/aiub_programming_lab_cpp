#include <iostream>
#include <string>
using namespace std;

struct Student{
    int id;
    string name;
    float cgpa;
    int numberOfCreditsCompleted;

    void setData(int idd, string namee, float cgpaa, int numberOfCreditsCompletedd)    {
        id = idd;
        name = namee;
        cgpa = cgpaa;
        numberOfCreditsCompleted = numberOfCreditsCompletedd;
    }

    int getScholarshipPercent()    {
        int scholarshipPercent;
        if (cgpa >= 3.85 && numberOfCreditsCompleted > 45)     {
            scholarshipPercent = 30;
        }
        else if (cgpa >= 3.75 && numberOfCreditsCompleted > 45)     {
            scholarshipPercent = 20;
        }
        else     {
            scholarshipPercent = 0;
        }
        return scholarshipPercent;
    }

    void display()    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "Completed Credits: " << numberOfCreditsCompleted << endl;
        cout << "Scholarship: " << getScholarshipPercent() << "%" << endl;
    }
};

int main()  {
    Student s1;
    s1.setData(1234, "Fantastic", 3.94, 54);
    s1.display();
}
