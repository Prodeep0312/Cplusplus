#include <iostream>
#include <memory>
using namespace std;

int main() {
    shared_ptr<int> p1 = make_shared<int>(10);

    cout << "p1 value: " << *p1 << endl;
    cout << "p1 count: " << p1.use_count() << endl;

    shared_ptr<int> p2 = p1; // shared ownership

    cout << "After p2 = p1" << endl;
    cout << "p1 count: " << p1.use_count() << endl;
    cout << "p2 count: " << p2.use_count() << endl;

    {
        shared_ptr<int> p3 = p1;
        cout << "Inside block, count: " << p1.use_count() << endl;
    } // p3 destroyed here

    cout << "After block, count: " << p1.use_count() << endl;
}