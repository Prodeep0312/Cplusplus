#include<iostream>
using namespace std;

void displayCounter()
{
    int counter {0};
    counter++;
    cout<<"Counter value:"<<counter<<endl;

}
void displayStaticCounter()
{
    static int counter {0};
    counter++;
    cout<<"Static Counter value:"<<counter<<endl;
}

int main()
{   
    displayCounter();
    displayCounter();
    displayCounter();

    displayStaticCounter();
    displayStaticCounter();
    displayStaticCounter();

    return 0;
}