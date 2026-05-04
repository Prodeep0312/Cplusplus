#include <iostream>
#include <memory>
using namespace std;

void customDelete(int* p) {
    cout << "Custom deleting...\n";
    delete p;
}

int main() {
    unique_ptr<int, decltype(&customDelete)> ptr(new int(10), customDelete);

    cout << "Value: " << *ptr << endl;
}