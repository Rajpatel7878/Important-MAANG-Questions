#include <iostream>
using namespace std;

class Student {

public:

    string name;
    int marks;

    void input() {

        cin >> name;
        cin >> marks;
    }

    void display() {

        cout << name << " "
             << marks << endl;
    }
};

int main() {

    Student students[3];

    for (int i = 0; i < 3; i++) {

        students[i].input();
    }

    for (int i = 0; i < 3; i++) {

        students[i].display();
    }

    return 0;
}

//Output:
//John 90
//Jane 85
//Bob 92