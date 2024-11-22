/* AUTHOR : EMERI RAPHAEL CHUKWUKA
  INSTITUTION : COMPLETE COMPUTER AND TECHNOLOGY
  DATE CREATED : 18/11/2024
  DATE EDITED : 22/11/2024
*/




#include <iostream>
#include <string>
using namespace std;


class Account {
private:

    string Name;
    string Pin;
    float Balance;

public:
    Account(string name, string pin, float initial_balance)
    : Name(name), Pin(pin), Balance(initial_balance) {}

    string getName()const { return Name; }
    string getPin () const { return Pin; }
    float getBalance () const {return Balance; }

// TO DEPOSIT
    void Deposit (float amount) {
    if (amount > 0){
        Balance += amount;
        cout << "DEPOSITED : $" << amount << endl;
        }else {
            cout << "INVALID DEPOSIT AMOUNT. " << endl;
    }

 }

// FUNCTION FOR WITHDRAWAL
 bool Withdraw(float amount) {
    if (amount > 0 && amount <= Balance) {
        Balance -= amount;
        cout << "WITHDRAWAL COMPLETE : $" << amount << endl;
        return true;
    }else {
        cout << "INVALID WITHDRAWAL AMOUNT OR INSUFFICIENT FUNDS. " << endl;
        return false;
    }
 }

// FUNCTION FOR TRANSFER OF MONEY
 void Transfer(Account &toAccount, float amount) {
    if (Withdraw(amount)) {
        toAccount.Deposit(amount);
        cout << "TRANSFER COMPLETE: $" << amount << " to " << toAccount.getName() << endl;
    }

 }

};

// FUNCTION TO DISPLAY MENU
void displayMenu () {
    cout << "ATM MENU: " << endl;
    cout << "1. CHECK BALANCE" << endl;
    cout << "2. DEPOSIT MONEY" << endl;
    cout << "3. WITHDRAW CASH" << endl;
    cout << "4. TRANSFER FUNDS" << endl;
    cout << "5. EXIT " << endl;
}


