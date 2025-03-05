#include <iostream>
#include <string>
using namespace std;

class person {
    private:
    float age;
    double height;

    public:
    person() {
        cout << "Default Constructor" << endl;
    }

    person(float Age) {
        cout << "1 Parameterized Constructor" << endl;
        age = Age;
    }

    person(float Age, double Height) {
        cout << "2 Parameterized Constructor" << endl;
        age = Age;
        height = Height;
    }

    void display()   {
        cout << endl;
        cout << "Age: " << age << " years" << endl;
        cout << "Height: " << height << " meters" << endl;
        cout << endl;
    }
    ~person()  {
        cout << "Destructor Called!" << endl;
    }
};

int main()    {
    person p1(28, 1.78);
    person p2(27);
    person p3;
    p1.display();
}
