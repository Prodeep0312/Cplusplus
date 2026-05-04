#ifndef _SAVINGSACCOUNT_H_
#define _SAVINGSACCOUNT_H_
#include<string>
#include "Account.h"

class SavingsAccount:public Account{
public:
double interest_rate;
std::string name;
double balance;
void deposit(double amount);
void withdraw(double amount);
SavingsAccount();
~SavingsAccount();
};

#endif // _ACCOUNT_H_