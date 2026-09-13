//Find the sum of digits of a number using recursion.


//Input: 12345
//Output: 15

#include <iostream>
using namespace std;

int sumDigits(int n) {

    if (n == 0)
        return 0;

    return (n % 10) + sumDigits(n / 10);
}

int main() {

    int n = 12345;

    cout << sumDigits(n);

    return 0;
}


//Output:
//sumDigits(12345)
//= 5 + sumDigits(1234)
//= 5 + 4 + sumDigits(123)
//= 5 + 4 + 3 + sumDigits(12)
//= 5 + 4 + 3 + 2 + sumDigits(1)
//= 5 + 4 + 3 + 2 + 1
//= 15