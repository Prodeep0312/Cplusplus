#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box(int l) : length(l) {}

    // Friend function declaration
    friend void printLength(Box b);
};

// Friend function definition
void printLength(Box b) {
    cout << "Length is: " << b.length << endl;  // Accessing private member
}

int main() {
    Box b1(10);
    printLength(b1);
}
