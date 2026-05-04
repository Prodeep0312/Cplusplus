#include<iostream>
using namespace std;
int main()
{   
    int amount {100};
    int number_of_items {8};

    cout<<"Average is :" <<amount/number_of_items<<endl; 
    cout<<"Average using static cast is :" <<static_cast<double>(amount)/number_of_items<<endl; 
    //(double)amount/number_of_items  ->old style c based

    return 0;
}