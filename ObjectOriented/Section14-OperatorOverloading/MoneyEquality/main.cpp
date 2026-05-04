#include "Money.h"
#include<iostream>
using namespace std;

int main()
{
      // Using (dollars, cents) constructor
    Money m1{10, 50};   // $10.50
    Money m2{10, 50};   // $10.50
    Money m3{5, 75};    // $5.75

    // Using total cents constructor
    Money m4{1050};     // $10.50
    Money m5{575};      // $5.75

    cout << boolalpha << endl;

    // Testing ==
    cout << "m1 == m2 : " << (m1 == m2) << endl;  // true
    cout << "m1 == m3 : " << (m1 == m3) << endl;  // false
    cout << "m1 == m4 : " << (m1 == m4) << endl;  // true

    // Testing !=
    cout << "m1 != m3 : " << (m1 != m3) << endl;  // true
    cout << "m3 != m5 : " << (m3 != m5) << endl;  // false

}