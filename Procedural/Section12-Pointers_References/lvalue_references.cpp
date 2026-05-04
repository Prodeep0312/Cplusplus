#include<iostream>
using namespace std;

int squarefunc(int &n)
{
    return n*n;
}

int main()
{
    int num {8};

    int square1=squarefunc(num);
    //int square2=squarefunc(5); COMPILE ERROR AS REFERNCES MUST BE LVALUE ..5 is not lvalue
    cout<<square1;

    return 0;

}