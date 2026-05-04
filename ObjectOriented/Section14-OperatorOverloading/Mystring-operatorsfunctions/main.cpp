// Section 14
// Overloading operators as non-member (global) methods
#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main() {
    
    Mystring larry {"Larry"};
    larry.display();                                        // Larry
    
    larry = -larry;
    larry.display();                                        // larry
    
    cout << boolalpha << endl;
    Mystring moe{"Moe"};
    Mystring stooge = larry;
    
    cout << (larry == moe) << endl;             // false
    cout << (larry == stooge) << endl;          // true

    return 0;
}

