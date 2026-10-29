#include <iostream>
using namespace std;

int main() {
    int num = 25;
    int* ptr = &num;

    cout << "Value: " << num << "\n";
    cout << "Address: " << ptr << "\n";
    cout << "Value via pointer: " << *ptr << "\n";
    return 0;
}