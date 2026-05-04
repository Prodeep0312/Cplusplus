#include "SavingsAccount.h"
#include<iostream>

//returntype namespace fnname  RNF
SavingsAccount::SavingsAccount()
:interest_rate{7.2}{
    std::cout<<" Savings Account class constructor called"<<std::endl;
}

SavingsAccount::~SavingsAccount()
{
    std::cout<<"Savings Account class destructor called"<<std::endl;
}

void SavingsAccount::deposit(double amount){
    std::cout<<"Savings Account class deposit called with amount: "<<amount<<std::endl;
}

void SavingsAccount::withdraw(double amount){
    std::cout<<"Savings Account class withdraw called with amount: "<<amount<<std::endl;
}