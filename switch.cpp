#include <iostream>
using namespace std;

int main() {
	char grade;
	cout<<"Enter your Grade: ";
	cin>> grade;
	
	switch(grade){
		case'A':
	    cout<<"Pass";
	    break;
  
        case 'B':
      	cout<<"Pass";
       	break;
          
	     case'C':
	    cout<<"Pass";
		 break;	
        	default:
        		cout<<"Fail";
  }
    return 0;
}