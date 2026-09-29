#include <iostream>
using namespace std;

class Number {

public:

    int* ptr;

    Number() {

        ptr = new int;

        *ptr = 100;
    }

    void display() {

        cout << *ptr;
    }
};

int main() {

    Number n;

    n.display();

    return 0;
}
//Output:
//100