#include <iostream>
using namespace std;

int main()  {
    int a[3][3];
    int i, j, even = 0, odd = 0, num_two = 0;
    for(i = 0; i<3; i++)    {
        for(j = 0; j<3; j++)    {
            cin >> a[i][j];
        }
    }
    for(i = 0; i<3; i++)    {
        for(j = 0; j<3; j++)    {
            if(a[i][j]%2 == 0)    {
                even++;
            }
            else    {
                odd++;
            }
            if(a[i][j] == 2)    {
                num_two++;
            }
        }
    }
    cout << "Num of Odd Element: " << odd << endl;
    cout << "Num of Even Element: " << even << endl;
    cout << "Num of 2: " << num_two << endl;
}
