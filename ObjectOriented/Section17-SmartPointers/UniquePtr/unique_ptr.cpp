#include<iostream>
#include<memory>
using namespace std;

class Test {
public:
    Test() { std::cout << "Created\n"; }
    ~Test() { std::cout << "Destroyed\n"; }
};

int main()
{
    unique_ptr<int> ptr1=make_unique<int>(10);
    cout<<"Value of ptr"<<*ptr1<<endl;
   cout<<"Adress stored in ptr"<<ptr1.get()<<endl;

    //compiler error as copying is not allowed
   // unique_ptr<int> ptr2=ptr1;

   //move
   unique_ptr<int> p1=make_unique<int>(5);
   unique_ptr<int>p2=move(p1);
   if (p1==nullptr)
    cout << "p1 is now empty\n";

    unique_ptr<Test> p3=make_unique<Test>();

    return 0;

}