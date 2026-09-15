//Demonstrate a double pointer.

#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* ptr = &x;
    int** dptr = &ptr;

    cout << "Value of x: " << x << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;
    cout << "Value pointed by dptr: " << **dptr << endl;

    return 0;
}

//Output:
//Value of x: 10
//Value pointed by ptr: 10
//Value pointed by dptr: 10