#include <iostream>
using namespace std;

string player1;
string player2;
char choice1 = 'R';
char choice2 = 'P';

void printplayers(){
	cout << "Please enter the name of Player1: ";
	cin >> player1;
	cout << "Please enter the name of Player2: ";
	cin >> player2;
}
void printchoice(){
	cout << "\n" << player1 << ", (R)OCK-(P)APER-(S)CISSOR SHOOT: ";
	cin >> choice1;
	cout << player2 << ", (R)OCK-(P)APER-(S)CISSOR SHOOT: ";
	cin >> choice2;
	
}

int main(){
	char again = 'Y';
	
	cout << "Welcome to C++ Rock-Paper-Scissors game! \n"<< endl;
	
	do{
		printplayers();
		
		printchoice();
		
		switch(choice1){
			
			
			case 'r':
			case 'R':
				switch(choice2){
					
					case 'r':
					case 'R':
						break;
			
					case 'p':
					case 'P':
					
				break;
				
			case 's':
			case 'S':
				if(('p'==choice2) | ('P' == choice2)){
					cout << player1 << " WINS!" << endl;}
				break;
				
			
			
			default:
				cout << choice1 << " is not valid..." << endl;
					
				break;
			
			
			
			case 'p':
			case 'P':
				if(('p'==choice2) | ('P' == choice2)){
					cout << "DRAW!" << endl;}
				break;
				
			case 's':
			case 'S':
				if(('p'==choice2) | ('P' == choice2)){
					cout << player1 << " WINS!" << endl;}
				break;
				
			
			
			default:
				cout << choice1 << " is not valid..." << endl;
			
		}
		cout << "\nPlay again (Y/n)? " << endl;
		cin >> again;
		
	}
	
	while ( 'n'!=again);	
	return 0;
}