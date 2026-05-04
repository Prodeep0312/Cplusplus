#include<iostream>
using namespace std;

void operation(int num)
{
    num=1000;
    cout<<num<<endl;
}
int main()
{
    int num {100};
    cout<<"VALUE of num before calling function"<<num<<endl;
    operation(num);
    cout<<"VALUE of after calling function"<<num<<endl;
    return 0;
}