//Create a class that counts how many objects have been created.

#include <iostream>
using namespace std;

class Student {
private:
    static int count;

public:
    Student() {
        count++;
    }

    static void showCount() {
        cout << "Objects created = " << count << endl;
    }
};

int Student::count = 0;

int main() {

    Student s1;
    Student s2;
    Student s3;

    Student::showCount();

    return 0;
}
