// Section 14
// Overloaded insertion and extraction operators
#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    
    Mystring larry {"Larry"};
    Mystring moe {"Moe"};
    Mystring curly;
    
    cout << "Enter the third name: ";
    cin >> curly;
    
    cout << "The three stooges are " << larry << ", " << moe << ", and " << curly << endl;   
    return 0;
}

