//Create a friend function that accesses private members of a class.

#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    Student(int m) {
        marks = m;
    }

    friend void display(Student s);
};

void display(Student s) {
    cout << "Marks = " << s.marks << endl;
}

int main() {

    Student s(90);

    display(s);

    return 0;
}
