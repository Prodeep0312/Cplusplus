// Section 14
// Overloading copy assignment
#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main() {
    Mystring a {"Hello"};                // overloaded constructor
    Mystring b;                             // no-args contructor
    b = a;                                      // copy assignment 
                                                  // b.operator=(a)

    b.display();
    b = "This is a test";   
    b.display();              // b.operator=("This is a test");
    
    return 0;
}

