#include<iostream>
using namespace std;
int main(){
int num1, num2;
cout<<"Enter 1st Number:";
cin>> num1;
cout<<"Enter 2nd Number:";
cin>> num2;

int sum = num1 + num2;
int sub = num1 - num2;
int mul = num1 * num2;
cout<<"ADDITION: " << sum <<"\n";
cout<<"SUBTRACTION: " << sub << "\n";
cout<<"MULTIPLICATION: " << mul << "\n";

if(num2 != 0)
{
float div = (float) num1 / num2;
int mod = num1 % num2;
cout<<"Division: " << div << "\n";
cout<<"modulus: " << mod << "\n";
}

 else 
{
	cout<<"Division and Modulus cannot be performed by zero!";
}
return 0;
}