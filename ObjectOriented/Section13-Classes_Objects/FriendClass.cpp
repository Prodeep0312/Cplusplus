#include <iostream>
using namespace std;

class Engine;  // Forward declaration

class Car {
private:
    int speed;

public:
    Car(int s) : speed(s) {}

    friend class Engine;  // Engine can access private members
};

class Engine {
public:
    void showSpeed(Car c) {
        cout << "Car speed is: " << c.speed << endl;  // Access private
    }
};

int main() {
    Car c1(120);
    Engine e1;
    e1.showSpeed(c1);
}
