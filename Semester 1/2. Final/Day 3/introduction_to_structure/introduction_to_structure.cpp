#include <iostream>
using namespace std;

struct student  {
  char name[100];
  char id[10];
  double cgpa;
};

struct book  {
  char title[200];
  char edition[10];
  char author_name[100];
  double price;
};

void book_func()  {
    book b1, b2;
    cout << "Enter Information for Book 1" << endl;
    cout << "Enter Title: ";
    cin >> b1.title;
    cout << "Enter Edition: ";
    cin >> b1.edition;
    cout << "Enter Author Name: ";
    cin >> b1.author_name;
    cout << "Enter Price: ";
    cin >> b1.price;
    cout << endl;

    cout << "Enter Information for Book 2" << endl;
    cout << "Enter Title: ";
    cin >> b2.title;
    cout << "Enter Edition: ";
    cin >> b2.edition;
    cout << "Enter Author Name: ";
    cin >> b2.author_name;
    cout << "Enter Price: ";
    cin >> b2.price;
    cout << endl;

    cout << endl;
    cout << "Information of Book 1" << endl;
    cout << "Title: " << b1.title << endl;
    cout << "Edition: " << b1.edition << endl;
    cout << "Author Name: " << b1.author_name << endl;
    cout << "Price: " << b1.price << endl;
    cout << endl;

    cout << "Information of Book 2" << endl;
    cout << "Title: " << b2.title << endl;
    cout << "Edition: " << b2.edition << endl;
    cout << "Author Name: " << b2.author_name << endl;
    cout << "Price: " << b2.price << endl;

}

void student_func()  {
    student s1, s2, s3;
    cout << "Enter user details: " << endl;
    cout << "Enter name for s1: ";
    cin.getline(s1.name, 100);
    cout << "Enter ID for s1: ";
    cin.getline(s1.id, 10);
    cout << "Enter CGPA for s1: ";
    cin >> s1.cgpa;
    cout << "Student Information:" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "ID: " << s1.id << endl;
    cout << "CGPA: " << s1.cgpa << endl;

}

void student_func_2()    {
    student s[3];
    for (int i = 0; i < 1; i++)    {
        cout << "Enter information for student " << i + 1 << ":" << endl;
        cout << "Enter name: ";
        cin >> s[i].name;
        cout << "Enter ID: ";
        cin >> s[i].id;
        cout << "Enter CGPA: ";
        cin >> s[i].cgpa;
    }

    for (int i = 0; i < 1; i++)    {
        cout << "Stored information for student " << i + 1 << ":" << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "ID: " << s[i].id << endl;
        cout << "CGPA: " << s[i].cgpa << endl;
    }

}

void matrix_add()     {
    int r1=0, r2=0, r3=0, c1=0, c2=0, c3=0;
    int arr[3][3];
    for (int i = 0; i < 3; i++)    {
        for (int j = 0; j < 3; j++)    {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)    {
        for (int j = 0; j < 3; j++)    {
            if(j == 0)    {
                c1 += arr[i][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)    {
        for (int j = 0; j < 3; j++)    {
            if(j == 1)    {
                c2 += arr[i][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)    {
        for (int j = 0; j < 3; j++)    {
            if(j == 2)    {
                c3 += arr[i][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)    {
        for (int j = 0; j < 3; j++)    {
            if(i == 0)    {
                r1 += arr[i][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)    {
        for (int j = 0; j < 3; j++)    {
            if(i == 1)    {
                r2 += arr[i][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)    {
        for (int j = 0; j < 3; j++)    {
            if(i == 2)    {
                r3 += arr[i][j];
            }
        }
    }
     cout << "R1: " << r1 << endl;
     cout << "R2: " << r2 << endl;
     cout << "R3: " << r3 << endl;
     cout << "C1: " << c1 << endl;
     cout << "C1: " << c2 << endl;
     cout << "C1: " << c3 << endl;
}

int main()    {
    //student_func();
    //student_func_2();
    //book_func();
    matrix_add();
}
