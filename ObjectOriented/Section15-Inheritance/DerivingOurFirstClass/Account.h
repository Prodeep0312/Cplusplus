#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include<string>

class Account{
public:
std::string name;
double balance;
void deposit(double amount);
void withdraw(double amount);
Account();
~Account();
};

#endif // _ACCOUNT_H_