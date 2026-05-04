#include "Money.h"

Money::Money(int dollars, int cents) : dollars{dollars}, cents{cents} {}

Money::Money(int total) : dollars {total/100}, cents{total%100}  {}
   

bool Money::operator==(const Money& rhs)const{
    if(dollars == rhs.dollars && cents==rhs.cents)
    return true;
    
    return false;
}

bool Money::operator!=(const Money& rhs)const{
    if(dollars == rhs.dollars && cents==rhs.cents)
    return false;
    
    return true;
}


