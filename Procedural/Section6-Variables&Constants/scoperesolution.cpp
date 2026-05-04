#include <iostream>
using namespace std;

int x = 100;

void test() {
    int x = 30;
    cout << x << endl;     // 30 (local)
    cout << ::x << endl;   // 100 (global)
}

int main()
{   test();
    return 0;
}
