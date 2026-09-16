#include <iostream>
using namespace std;

int main() {

    int num = 100;

    void* ptr = &num;

    cout << *(static_cast<int*>(ptr));

    return 0;
}

//Output:
//100