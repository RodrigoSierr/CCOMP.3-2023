#include <iostream>
#include <string>

using namespace std;

class Account 
{
    private:
        string name;
        int balance;

    public:
        Account()
        {
            name = "";
            balance = 0;
        }

        Account(string accountName, int initialBalance)
        {
            name = accountName;
            if (initialBalance > 0)
            {
                balance = initialBalance;
            }
        }

        int getBalance() const 
        {
            return balance;
        }

        void setBalance(int newBalance)
        {
            balance = newBalance;
        }

        void setName(string accountName) 
        {
            name = accountName;
        }


        string getName() const 
        {
            return name;
        }

        void deposit(int depositAmount)
        {
            if (depositAmount > 0)
            {
                setBalance(getBalance() + depositAmount);
            }
        }

        void retirar(int montoretiro)
        {
            if (montoretiro < getBalance())
            {
                setBalance(getBalance() - montoretiro);
            }
            else
            {
                cout << "El importe retirado excede el saldo de la cuenta.";
            }
        }
};
