#include <iostream>
using namespace std;

int main()  {
    char verdict;
    cout << "Tell me the grade letter you want to know the definition of: ";
    cin >> verdict;
    switch(verdict)    {
        case 'A' :
        case 'a' :
            cout << "Excellent!" << endl;
            break;
        case 'B' :
        case 'b' :
            cout << "Good!" << endl;
            break;
        case 'C' :
        case 'c' :
            cout << "Average!" << endl;
            break;
        case 'D' :
        case 'd' :
            cout << "Poor!" << endl;
            break;
        case 'F' :
        case 'f' :
            cout << "Fail!" << endl;
            break;
        default:
            cout << "Invalid response!" << endl;
    }
    return 0;
}
