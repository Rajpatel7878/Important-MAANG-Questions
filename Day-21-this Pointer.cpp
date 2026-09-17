//Use the this pointer to distinguish data members from parameters.

#include <iostream>
using namespace std;

class Student {

private:

    int marks;

public:

    void setMarks(int marks) {

        this->marks = marks;
    }

    void display() {

        cout << this->marks;
    }
};

int main() {

    Student s;

    s.setMarks(95);

    s.display();

    return 0;
}

//Output:
//95