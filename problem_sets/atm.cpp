#include <iostream>
#include <string>
#include "atm.h"
using namespace std;

int main()
{
    //ALREADY EXISTING ACCOUNTS... PREDEFINED
    Account account1("Robert", "2990", 10000.00);
    Account account2("Alice", "1234", 500.00);
    Account account3 ("Enoma", "2468", 100000.00);

    string inputName, inputPin;
     Account *currentAccount = nullptr;

     // LOOP UNTIL VALID CREDNTIALS ARE ENTERED
     while (currentAccount == nullptr) {
    cout << "ENTER YOUR NAME : ";
    cin >> inputName;
    cout << "ENTER YOUR PIN : ";
    cin >> inputPin;

    // VALIDATE USER CREDNTIALS
     if (inputName == account1.getName() && inputPin == account1.getPin()) {
        currentAccount = &account1;
     }else if (inputName == account2.getName() && inputPin == account2.getPin()) {
         currentAccount = &account2;
    }else if (inputName == account3.getName() && inputPin == account3.getPin()) {
         currentAccount = &account3;
    }else {
        cout << "INVALID CREDENTIALS." << endl;
        cout << endl;

    }
}

    int choice;
    do {
        displayMenu();
        cout << "SeLeCt aN oPtIoN : ";
        cin >> choice;

// TO CHECK BALANCE
    switch (choice){
    case 1:
        cout << "CURRENT BALANCE : $" << currentAccount -> getBalance() << endl;
        break;

// TO DEPOSIT 
    case 2: {
        float depositAmount;
        cout << "ENTER AMOUNT TO DEPOSIT : ";
        cin>> depositAmount;
        currentAccount -> Deposit(depositAmount);
        break;
    }

// TO WITHDRAW
    case 3: {
        float withdrawAmount;
        cout << "ENTER AMOUNT TO WITHDRAW : ";
        cin >> withdrawAmount;
        currentAccount -> Withdraw(withdrawAmount);
        break;
    }

// TO TRANSFER
    case 4:  {
        string transferName;
        float transferAmount;
        cout << "ENTER THE NAME OF BENEFICIARY : ";
        cin >> transferName;

        Account *toAccount = nullptr;
        if (transferName == account1.getName()){
                toAccount = &account1;

        }else if(transferName == account2.getName()){
                toAccount = &account2;

        }else if (transferName == account3.getName()){
                toAccount = &account3;
        }else {
            cout << "INVALID ACCOUNT NAME. " << endl;
            break;
        }

        cout << "ENTER AMOUNT TO TRANSFER : ";
        cin >> transferAmount;
        currentAccount -> Transfer(*toAccount, transferAmount);
        break;
    }

// TO EXIT THE ATM
    case 5:
        cout << "EXITING ATM..." << endl;
        break;
    default:
        cout << "INVALID OPTION. TRY AGAIN..." << endl;
    }
    cout << endl;

    }while (choice != 5);


    return 0;
}
