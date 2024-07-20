#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    int accountNumber;
    int balance;

public:
    Account(int accNum, double bal) {
        accountNumber = accNum;
        if (bal >= 0) {
            balance = bal;
        } else {
            cout << "Invalid balance for account " << accountNumber << ". Setting balance to 0." << endl;
            balance = 0;
        }
    }

    void displayAccount() const {
        cout << "Account Number: " << accountNumber << ", Balance: $" << balance << endl;
    }
};

int main() {
    Account users[10] = {
        Account(1001, 500.75),
        Account(1002, 1500.50),
        Account(1003, -100), 
        Account(1004, 2000),
        Account(1005, 250.25),
        Account(1006, 0),     
        Account(1007, 750),
        Account(1008, 1250.60),
        Account(1009, 300),
        Account(1010, -50)    
    };

    cout<<"Enter the account number";
    cin>>

    return 0;
}