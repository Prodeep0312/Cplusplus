#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{   vector<int>vec {1,2,3,4,5};
    for_each(vec.begin(),vec.end(),
    [] (int x) {
        cout<<x*x<<" ";
    });

    return 0;
}