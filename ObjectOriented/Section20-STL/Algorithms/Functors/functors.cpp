#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Square_Functor{
    void operator()(int x){
        cout<<x*x<<" ";
    }
};

int main()
{   vector<int>vec {1,2,3,4,5};
    Square_Functor square;
    for_each(vec.begin(),vec.end(),square);

    return 0;
}