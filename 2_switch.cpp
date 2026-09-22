#include <iostream>
using namespace std;

int main() {
	int month;
 cout<<"Enter your month:";
 cin>> month;
 
 switch (month){
 	case 1: case 2: case 3:
 		cout<<"Quarter 1";
 		break;
 			
    case 4: case 5: case 6:
    	cout<<"Quarter 2";
    	break;
    		
    case 7: case 8: case 9:
    	cout<<"Quarter 3";
    	break;
    		
    case 10: case 11: case 12:
    	cout<<"Quarter 4";
    	break;
}
return 0;
}
