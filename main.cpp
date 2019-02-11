#include <iostream>
using namespace std;

string player1;
string player2;
char choice1;
char choice2;

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
						cout << "DRAW!" << endl;
						break;
					
					case 'p':
					case 'P':
						cout << player2 << " WINS!" << endl;
						break;
						
					case 's':
					case 'S':
						cout << player1 << " WINS!" << endl;
						break;
						
					default:
						cout << choice2 << " is not valid..." << endl;
				}
				break;
				
				
			case 'p':
			case 'P':
				switch(choice2){
					
					case 'p':
					case 'P':
						cout << "DRAW!" << endl;
						break;
					
					case 's':
					case 'S':
						cout << player2 << " WINS!" << endl;
						break;
						
					case 'r':
					case 'R':
						cout << player1 << " WINS!" << endl;
						break;
						
					default:
						cout << choice2 << " is not valid..." << endl;
				}
				break;
				
			case 's':
			case 'S':
				switch(choice2){
					
					case 's':
					case 'S':
						cout << "DRAW!" << endl;
						break;
					
					case 'r':
					case 'R':
						cout << player2 << " WINS!" << endl;
						break;
						
					case 'p':
					case 'P':
						cout << player1 << " WINS!" << endl;
						break;
						
					default:
						cout << choice2 << " is not valid..." << endl;
				}
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