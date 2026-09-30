//Write a program demonstrating both.

#include <iostream>
using namespace std;

int main() {

    int num = 10;

    int* ptr = &num;

    int& ref = num;

    *ptr = 20;

    cout << num << endl;

    ref = 30;

    cout << num << endl;

    return 0;
}

//Output:
//20
//30