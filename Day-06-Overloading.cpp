#include <iostream>
using namespace std;

class Area {
public:

    int calculate(int side) {
        return side * side;
    }

    int calculate(int length, int breadth) {
        return length * breadth;
    }

    double calculate(double radius) {
        return 3.14159 * radius * radius;
    }
};

int main() {

    Area a;

    cout << "Square = " << a.calculate(5) << endl;
    cout << "Rectangle = " << a.calculate(5, 10) << endl;
    cout << "Circle = " << a.calculate(5.0) << endl;

    return 0;
}