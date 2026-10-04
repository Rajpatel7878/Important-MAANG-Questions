#include <iostream>
using namespace std;

int main() {

    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    for (int j = 0; j < 3; j++) {

        for (int i = 0; i < 2; i++) {

            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}

//Output:
//1 4
//2 5
//3 6