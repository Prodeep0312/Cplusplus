#include<iostream>
using namespace std;

int main()
{   
    int n=5;

    const int c1=n;
    n++;
    //constexpr int c2=n; error as value should be decided at compile time
    constexpr int size=5;
    constexpr int c2=size;

    return 0;
}