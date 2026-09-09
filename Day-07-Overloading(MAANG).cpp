//Predict whether the following calls are valid.


#include <iostream>
#include <string>
using namespace std;

void print(int x) {
    cout << "int";
}

void print(double x) {
    cout << "double";
}

void print(string x) {
    cout << "string";
}

int main() {
    print(10);
    print(10.5);
    print("Hello");
}
