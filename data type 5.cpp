#include<iostream>
using namespace std;
int main(){
	int rollnumber = 3;
	float GPA = 3.6;
	char grade = 'A';
	bool is_pass = (GPA>=2.0);
	cout<<"Roll no: " << rollnumber <<"\n";
	cout<<"GPA: "     << GPA <<"\n";
	cout<<"Grade: "  << grade <<"\n";
	cout<<"Pass: " << boolalpha  << is_pass;
	return 0;
}