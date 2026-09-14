//Write a program to demonstrate a pointer.
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *ptr = &x;  // ptr points to the address of x

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;

    return 0;
}   

//Output:
//Value of x: 10
//Address of x: 0x7fff5fbff6ac
//Value of ptr: 0x7fff5fbff6ac
//Value pointed by ptr: 10