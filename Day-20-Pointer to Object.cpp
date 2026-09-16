#include <iostream>
using namespace std;

class Student {

public:

    string name;
    int marks;

    void display() {

        cout << name << endl;
        cout << marks << endl;
    }
};

int main() {

    Student s;

    s.name = "Raj";
    s.marks = 90;

    Student* ptr = &s;

    cout << ptr->name << endl;

    ptr->display();

    return 0;
}

//Output:
//Raj
//90
