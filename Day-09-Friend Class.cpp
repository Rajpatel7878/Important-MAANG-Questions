//Demonstrate a class 

#include <iostream>
using namespace std;

class Student {
private:
    int marks = 90;

    friend class Teacher;
};

class Teacher {
public:
    void display(Student s) {
        cout << "Marks = " << s.marks << endl;
    }
};

int main() {

    Student s;
    Teacher t;

    t.display(s);

    return 0;
}
