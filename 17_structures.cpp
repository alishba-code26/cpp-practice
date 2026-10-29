#include <iostream>
using namespace std;

struct Student {
    string name;
    int rollNumber;
    float gpa;
};

int main() {
    Student s1 = {"Alishba", 003, 3.8};
    cout << "Name: " << s1.name << endl;
    cout << "Roll No: " << s1.rollNumber << endl;
    cout << "GPA: " << s1.gpa << endl;
    return 0;
}