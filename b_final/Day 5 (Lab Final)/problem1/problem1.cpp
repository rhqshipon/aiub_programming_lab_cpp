#include <iostream>
using namespace std;

class VendingMachine{
    private:
        double chips, soda, candy;
    public:
        VendingMachine()    {
            chips = 1.50;
            soda = 1.00;
            candy = 0.75;
        }

        void makePurchase(int itemNumber, double money)    {
            if (itemNumber == 1 && money >= chips)    {
                cout << "You can buy the Chips. Enjoy!" << endl;
            }
            else if (itemNumber == 2 && money >= soda)    {
                cout << "You can buy the Soda. Enjoy!" << endl;
            }
            else if (itemNumber == 3 && money >= candy)    {
                cout << "You can buy the Candy. Enjoy!" << endl;
            }
            else    {
                cout << "Sorry, something is wrong with the choice or the money, or both. Try again.";
            }
        }

        void displayMenu()   {
            cout << "Welcome to the Vending Machine!" << endl;
            cout << "Items available:" << endl;
            cout << "1. Chips - $1.50" << endl;
            cout << "2. Soda - $1.00" << endl;
            cout << "3. Candy - $0.75" << endl;
            cout << endl;
        }
};

int main()    {
    VendingMachine o1;
    o1.displayMenu();

    int choice;
    double money;
    cout << "Enter the item number: ";
    cin >> choice;
    cout << "Enter the amount of money you have: ";
    cin >> money;
    o1.makePurchase(choice, money);
}
