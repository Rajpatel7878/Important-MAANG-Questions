#include <iostream>
using namespace std;

class Calculator {
public:

    // Inline function
    int square(int n) {
        return n * n;
    }

    // Non-inline function declaration
    int cube(int n);
};

// Definition outside class
int Calculator::cube(int n) {
    return n * n * n;
}

int main() {
    Calculator c;

    cout << "Square = " << c.square(5) << endl;
    cout << "Cube = " << c.cube(5) << endl;

    return 0;
}