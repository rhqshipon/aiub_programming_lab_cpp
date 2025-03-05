#include <iostream>
#include <string>
using namespace std;

// Define the BankAccount structure
struct BankAccount {
    int accountNumber;
    string accountHolderName;
    double balance;
    bool isActive; // New boolean attribute to indicate if the account is active

    // Method to initialize account details
    void setDetails(int accNum, string accHolderName, double accBalance, bool active) {
        accountNumber = accNum;
        accountHolderName = accHolderName;
        balance = accBalance;
        isActive = active;
    }

    // Method to display account details
    void displayDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: $" << balance << endl;
        cout << "Account Status: " << (isActive ? "Active" : "Inactive") << endl; // Display account status
    }

    // Method to calculate yearly interest
    double calculateInterest() {
        if (!isActive) {
            cout << "Interest cannot be calculated for an inactive account." << endl;
            return 0.0; // No interest for inactive accounts
        }
        return balance * 0.05; // 5% interest
    }
};

int main() {
    // Create an instance of BankAccount
    BankAccount acc1;

    // Set account details (including active status)
    acc1.setDetails(12345, "John Doe", 1000.0, true); // Active account

    // Display account details
    acc1.displayDetails();

    // Calculate and display yearly interest
    double interest = acc1.calculateInterest();
    if (interest > 0) {
        cout << "Yearly Interest Earned: $" << interest << endl;
    }

    // Example with an inactive account
    cout << "\nTesting with an inactive account:\n";
    BankAccount acc2;
    acc2.setDetails(67890, "Jane Doe", 2000.0, false); // Inactive account
    acc2.displayDetails();
    acc2.calculateInterest(); // Interest will not be calculated

    return 0;
}
