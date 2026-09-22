#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;
    if (op == '+') {
        cout << "Result: " << num1 + num2 << "\n";
    } 
    else if (op == '-') {
        cout << "Result: " << num1 - num2 << "\n";
    } 
    else if (op == '*') {
        cout << "Result: " << num1 * num2 << "\n";
    } 
    else if (op == '/') {
       
        if (num2 != 0) {
            cout << "Result: " << num1 / num2 << "\n";
        } else {
            cout << "Error! Division by zero is not allowed.\n";
        }
    } 
    else {
        cout << "Error! Invalid operator entered.\n";
    }

    return 0;
}
