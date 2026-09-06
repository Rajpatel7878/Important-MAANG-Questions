//Create a class BankAccount where balance cannot be accessed directly from outside the class.

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    void setBalance(double b) {
        if (b >= 0)
            balance = b;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account;

    account.setBalance(5000);

    cout << "Balance = " << account.getBalance();

    return 0;
}
