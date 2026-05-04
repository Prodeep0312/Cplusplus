    #include <iostream>
    using namespace std;

    int x = 50;   // global

    void test() {
        int x = 10;   // local (shadows global)
        cout << x << endl;   // prints 10
    }

    int main() {
        cout << x << endl;   // prints 50
        test();
    }
