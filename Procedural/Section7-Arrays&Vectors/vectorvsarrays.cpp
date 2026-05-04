#include<iostream>
#include<vector>
using namespace std;

int main()
{   
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cout<<"arr["<<i<<"] :"<<arr[i]<<endl;
    }

    //vectors already initialized to zero

    vector<int>v (5);

    for(int i=0;i<v.size();i++)
    {
         cout<<"v["<<i<<"] :"<<v[i]<<endl;
    }
    return 0;
}