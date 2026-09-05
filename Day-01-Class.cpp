//Write a C++ program to create a Student class containing name, roll number and marks. Create an object and display the information.

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
    float marks;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {

    Student s;

    s.name = "Raj";
    s.roll = 101;
    s.marks = 89.5;

    s.display();

    return 0;
}
