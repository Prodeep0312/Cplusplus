#include<iostream>
using namespace std;
//we are using cout cin endl functions defined in std namespace

void show()
{
     cout<<"Outside MySpace"<<endl;
}

//namespace helps to avoid name conflict
namespace MySpace{

    int number =100;
    void show()
    {
        cout<<"Inside MySpace"<<endl;
    }
}

int main()
{   cout<<"Number :"<<MySpace::number<<endl;
    MySpace::show();
    show();

    return 0;
}