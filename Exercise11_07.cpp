/*
(Business: ATM machine) Use the Account class created in Programming Exercise 9.3 to simulate an ATM machine. Create 10 accounts in an array with id 0,
1, . . . , 9, and initial balance $100. The system prompts the user to enter an id.
If the id is entered incorrectly, ask the user to enter a correct one. Once an id is
accepted, the main menu is displayed, as shown in the sample run. You can enter a
choice 1 for viewing the current balance, 2 for withdrawing money, 3 for depositing money, and 4 for exiting the main menu. Once you exit, the system will prompt
for an id again. So, once the system starts, it will not stop.
*/

#include <iostream>
using namespace std;

class Account{
private:
    int id;
    double balance;

public:
    Account(int id, double balance){
        this -> id = id;
        this -> balance = balance;
    }

    double getID(){
        return id;
    }

    double getBalance(){
        return balance;
    }

    void withdraw(double amount){
        balance -= amount;
    }

    void deposit(double amount){
        balance += amount;
    }
};

int main(){
    // Create 10 accounts
    const int numAccounts = 10;
    Account** accounts = new Account*[numAccounts];

    for(int i = 0; i < numAccounts; i++){
        accounts[i] = new Account(i, 100.0);
    }

    while(true){
        int id;
        cout << "Enter an id: ";
        cin >> id;

        if(id >= 0 && id < numAccounts){
            int choice;
            while(true){
                cout << "Main menu\n\n";
                cout << "1: Check balance\n";
                cout << "2: Withdraw\n";
                cout << "3: Deposit\n";
                cout << "4: Exit\n";
                cout << "Enter a choice: ";
                cin >> choice;

                if(choice == 1){
                    cout << "The balance is " << accounts[id] -> getBalance() << endl;
                    break;
                } else if(choice == 2){
                    double amount;
                    cout << "Enter the amount to withdraw: ";
                    cin >> amount;
                    accounts[id] -> withdraw(amount);
                    cout << "Withdrawl successful." << endl;
                    cout << "The balance is now " << accounts[id] -> getBalance() << endl;
                    break;
                } else if(choice == 3){
                    double amount;
                    cout << "Enter the amount to deposit: ";
                    cin >> amount;
                    accounts[id] -> deposit(amount);
                    cout << "Deposit successful." << endl;
                    cout << "The balance is now " << accounts[id] -> getBalance() << endl;
                    break;
                } else if(choice == 4){
                    break;
                } else {
                    cout << "Invalid choice. Please try again.\n";
                }
            }
        } else {
            cout << "Invalid id. Please enter a correct one.\n";
        }
       
    }

    // Free the allocated memory
    for(int i = 0; i < numAccounts; i++){
        delete accounts[i];
    }
    delete[] accounts;
    accounts = nullptr;
    
    return 0;
}
