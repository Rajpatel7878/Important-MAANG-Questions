#include <iostream>
using namespace std;

int salary(int basic, int bonus = 5000) {
    return basic + bonus;
}

int main() {

    cout << salary(30000) << endl;
    cout << salary(30000, 10000) << endl;

    return 0;
}