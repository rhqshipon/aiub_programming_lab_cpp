#include <iostream>
using namespace std;

struct student  {
  char name[100];
  char id[10];
  double cgpa;
  char address[200];
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
    cin.ignore();
    cout << "Enter ID for s1: ";
    cin.getline(s1.id, 10);
    cin.ignore();
    cout << "Enter CGPA for s1: ";
    cin >> s1.cgpa;
    cout << "Enter Address for s1: ";
    cin >> s1.address;
    cin.ignore();

    cout << "Student Information:" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "ID: " << s1.id << endl;
    cout << "CGPA: " << s1.cgpa << endl;
    cout << "Address: " << s1.address << endl;

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

void matrix_add_new() {
    int arr[3][3];
    int row_sum[3] = {0, 0, 0};
    int col_sum[3] = {0, 0, 0};

    // Input the matrix
    cout << "Enter the elements of a 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
            row_sum[i] += arr[i][j];
            col_sum[j] += arr[i][j];
        }
    }

    // Display row sums
    for (int i = 0; i < 3; i++) {
        cout << "R" << i + 1 << ": " << row_sum[i] << endl;
    }

    // Display column sums
    for (int i = 0; i < 3; i++) {
        cout << "C" << i + 1 << ": " << col_sum[i] << endl;
    }
}

struct car_datastore   {
    char name[100];
    double price;
    char engine_type[30];
};

void car_func()    {
    car_datastore car[3];
    for (int i = 0; i < 3; i++)    {
        cout << "Insert information of Car " << i + 1 << "," << endl;
        cout << "Enter car name: ";
        cin >> car[i].name;
        cout << "Enter car price: ";
        cin >> car[i].price;
        cout << "Enter car engine type: ";
        cin >> car[i].engine_type;
        cout << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;

    for (int i = 0; i < 3; i++)    {
        cout << "Stored information of Car " << i + 1 << "," << endl;
        cout << "Car name: " << car[i].name << endl;
        cout << "Car price: " <<car[i].price << endl;;
        cout << "Car engine type: " << car[i].engine_type << endl;
        cout << endl;
    }
}

struct address   {
    int houseNumber[100];
    char streetName[200];
    char city[50];
};

void house_address_func()    {
    address a1, a2;

    cout << "Insert information of House 1," << endl;
    cout << "Enter House Number: ";
    cin >> a1.houseNumber;
    cout << "Enter Street Name: ";
    cin >> a1.streetName;
    cout << "Enter City: ";
    cin >> a1.city;

    cout << endl;
    cout << endl;

    cout << "Insert information of House 2," << endl;
    cout << "Enter House Number: ";
    cin >> a2.houseNumber;
    cout << "Enter Street Name: ";
    cin >> a2.streetName;
    cout << "Enter City: ";
    cin >> a2.city;

    cout << endl;
    cout << endl;
    cout << endl;

    cout << "Stored information of House 1," << endl;
    cout << "House Number: " << a1.houseNumber << endl;
    cout << "Street Name: " << a1.streetName << endl;;
    cout << "City: " << a1.city << endl;

    cout << endl;
    cout << endl;

    cout << "Stored information of House 2," << endl;
    cout << "House Number: " << a2.houseNumber << endl;
    cout << "Street Name: " << a2.streetName << endl;;
    cout << "City: " << a2.city << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
}


int main()    {
    //student_func();
    //student_func_2();
    //book_func();
    //matrix_add();
    //matrix_add_new();
    car_func();
}
