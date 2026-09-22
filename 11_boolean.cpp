#include <iostream>
using namespace std;

int main() {
    int marks;
    
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks >= 80 && marks <= 100) {
        cout << "Grade: A" << "\n";
    }
    else if (marks >= 70 && marks < 80) {
        cout << "Grade: B" << "\n";
    }
    else if (marks >= 60 && marks < 70) {
        cout << "Grade: C" << "\n";
    }
    else if (marks >= 0 && marks < 60) {
        cout << "Grade: F (Fail)" << "\n";
    }
    else {
        cout << "Invalid marks! Please enter marks between 0 and 100." << "\n";
    }
    return 0;
}
