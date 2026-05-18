#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    double balance;

public:

    void createAccount() {
        cout << "Enter Customer Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "\nAccount Created Successfully!\n";
    }

    void deposit() {
        double amount;

        cout << "Enter Amount to Deposit: ";
        cin >> amount;

        balance += amount;

        cout << "Deposit Successful!\n";
        cout << "Current Balance: " << balance << endl;
    }

    void withdraw() {
        double amount;

        cout << "Enter Amount to Withdraw: ";
        cin >> amount;

        if (amount > balance) {
            cout << "Insufficient Balance!\n";
        } 
        else {
            balance -= amount;

            cout << "Withdrawal Successful!\n";
            cout << "Current Balance: " << balance << endl;
        }
    }

    void display() {
        cout << "\n----- Account Details -----\n";

        cout << "Customer Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {

    BankAccount account;

    int choice;

    do {

        cout << "\n===== BANK MANAGEMENT SYSTEM =====\n";

        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Display Account Details\n";
        cout << "5. Exit\n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                account.createAccount();
                break;

            case 2:
                account.deposit();
                break;

            case 3:
                account.withdraw();
                break;

            case 4:
                account.display();
                break;

            case 5:
                cout << "Thank You for Using the System!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}