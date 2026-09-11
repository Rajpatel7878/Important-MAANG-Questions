#include <iostream>
using namespace std;

// Call by value
void value(int x) {
    x = 100;
}

// Call by address
void address(int *x) {
    *x = 200;
}

// Call by reference
void reference(int &x) {
    x = 300;
}

int main() {

    int a = 10;
    int b = 10;
    int c = 10;

    value(a);
    address(&b);
    reference(c);

    cout << "Call by value = " << a << endl;
    cout << "Call by address = " << b << endl;
    cout << "Call by reference = " << c << endl;

    return 0;
}

//Output:
//Call by value = 10
//Call by address = 200
//Call by reference = 300