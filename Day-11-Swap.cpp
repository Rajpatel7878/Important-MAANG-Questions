//Swap Using Call by Reference:
#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {

    int temp = a;
    a = b;
    b = temp;
}

int main() {

    int a = 10;
    int b = 20;

    swapNumbers(a, b);

    cout << a << " " << b;

    return 0;
}

//Output:
//20 10