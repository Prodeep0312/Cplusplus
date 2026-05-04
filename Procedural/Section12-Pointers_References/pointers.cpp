#include<iostream>
using namespace std;

int main()
{
    int *int_ptr; //uninitialized
    cout<<int_ptr<<endl; //garbage
    cout<<sizeof(int_ptr)<<endl;
    cout<<&int_ptr<<endl; //address of pointer

    int_ptr=nullptr;

    cout<<int_ptr<<endl; //0 ->pointing to nowhere
    cout<<sizeof(int_ptr)<<endl;
    cout<<&int_ptr<<endl; //address of pointer


    //pointers can point to different location ie its value can change

    double low_temp {10.2};
    double high_temp {110.5};
    int mid_temp {50};

    double *double_ptr;

    double_ptr=&low_temp;
    cout<<double_ptr<<endl;
    cout<<&low_temp<<endl;
    cout<<*double_ptr<<endl;
    cout<<"---------------------"<<endl;

    double_ptr=&high_temp;
    cout<<double_ptr<<endl;
    cout<<&high_temp<<endl;
    cout<<*double_ptr<<endl;
    cout<<"---------------------"<<endl;


    double_ptr=nullptr;
    cout<<double_ptr<<endl;

   // double_ptr=&mid_temp; compiler error


    return 0;
}