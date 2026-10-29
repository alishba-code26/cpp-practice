#include <iostream>
using namespace std;

int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int result = addNumbers(10, 20);
    cout << "Sum: " << result << "\n";
    return 0;
}