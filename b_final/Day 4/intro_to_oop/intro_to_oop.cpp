#include <iostream>
#include<string>
using namespace std;

class Student_new{
    public:
    string name;
    int id;
    void display()  {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << endl;
    }
};

class Student_oldd{
    private:
    string name;
    int id;

    public:
    void display()  {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << endl;
    }
    void setValue(string Name, int Id)   {
        name = Name;
        id = Id;
    }
};

class Student_olddd{
    private:
    string name;
    int id;

    public:
    void setName(string Name)   {
        name = Name;
    }
    void setId(int Id)  {
        id = Id;
    }
    string getName()    {
        return name;
    }
    int getID()    {
        return id;
    }
};

class Student{
    private:
    string name;
    int id;

    public:
    Student()   {
        cout << "Default Constructor" << endl;
    }

    Student(string Name)    {
        cout << "1 Parameterized Constructor" << endl;
        name = Name;
    }
    Student(string Name, int Id)    {
        cout << "2 Parameterized Constructor" << endl;
        name = Name;
        id = Id;
    }

    ~Student()  {
        cout << "Destructor Called!" << endl;
    }

    void display()  {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << endl;
    }
};

int main()  {
    Student s1("Alex", 01);
    Student s2("John", 02);
    Student s3;
    Student s4("BOB");
    s1.display();
    s2.display();
    s4.display();

}


void bulk()   {
    Student_olddd s1, s2;
    s1.setName("Alex"); s1.setId(01);
    cout << s1.getName() << ": " << s1.getID() << endl;

    s2.setName("John"); s2.setId(02);
    cout << s2.getName() << ": " << s2.getID() << endl;
}
