#include "Account.h"
#include<iostream>

//returntype namespace fnname  RNF
Account::Account()
:name{"An account"},balance{0}{
    std::cout<<"Account class constructor called"<<std::endl;
}

Account::~Account()
{
    std::cout<<"Account class destructor called"<<std::endl;
}

void Account::deposit(double amount){
    std::cout<<"Account class deposit called with amount: "<<amount<<std::endl;
}

void Account::withdraw(double amount){
    std::cout<<"Account class withdraw called with amount: "<<amount<<std::endl;
}