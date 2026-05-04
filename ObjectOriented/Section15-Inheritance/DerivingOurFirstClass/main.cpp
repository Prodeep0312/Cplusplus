#include<iostream>
#include "Account.h"
#include "SavingsAccount.h"

int main()
{   
    std::cout<<"ACCOUNT CLASS=============="<<std::endl;
    Account acc1{};
    acc1.deposit(5000);
    acc1.withdraw(2000);

    Account *p_acc {nullptr};
    p_acc=new Account();

    p_acc->deposit(1000);
    p_acc->withdraw(200);

    delete p_acc;

    std::cout<<"SAVINGS ACCOUNT CLASS=============="<<std::endl;

    SavingsAccount sacc1{};
    sacc1.deposit(500);
    sacc1.withdraw(250);

    SavingsAccount * sp_acc {nullptr};
    sp_acc=new SavingsAccount();

    sp_acc->deposit(200);
    sp_acc->withdraw(50);

    delete sp_acc;

    //order of call
    //costructor called from base to child
    //destructor called in reverse order from child to base

    return 0;
}
