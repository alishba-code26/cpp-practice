#include <iostream>
using namespace std;

int main() {
	char op;
	 int num1, num2;
	 cout<<"Enter your 1st number: " ;
	 cin>> num1 ;
	cout<<"Enter your operator(*,+,-,/):";
	cin>> op;
	cout<<"Enter your 2nd number: ";
	cin>> num2;
	switch(op){
		case '+':
		cout<<"Result: " << num1 + num2;
		break;
		
		case '-':
		cout<<"Result: " << num1 - num2;
		break;
		
		case '*':
		cout<<"Result: " << num1 * num2;
		break;
		
		case '/':
		if(num2!=0)
			cout<<"Result: " << num1 / num2;
			else 
			cout<<" Cannot divide by zero";
			break;		
			
			case '%':
    if (num2 != 0)
        cout << "Result: " << num1 % num2;
    else
        cout << " Cannot divide by zero";
    break;	
	
	default:
	cout << "Invalid operator";	
}
return 0;
}
