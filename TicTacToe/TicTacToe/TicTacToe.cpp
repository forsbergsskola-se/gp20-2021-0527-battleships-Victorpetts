#include <iostream>
using namespace std;

int main(){
    char grid[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int playerInput = 0;
	int row = 0;
	int column = 0;

	while (true) {
		cout << ' ' << grid[0][0] << '|' << grid[0][1] << '|' << grid[0][2] << endl;
		cout << "-------" << endl;
		cout << ' ' << grid[1][0] << '|' << grid[1][1] << '|' << grid[1][2] << endl;
		cout << "-------" << endl;
		cout << ' ' << grid[2][0] << '|' << grid[2][1] << '|' << grid[2][2] << endl;

		cout << "Choose a location on the board to place X " << endl;
		cin >> playerInput;

		switch (playerInput) {
			case 1:
				row = 0; column = 0;
				break;
			case 2:
				row = 0; column = 1;
				break;
			case 3:
				row = 0; column = 2;
				break;
			case 4:
				row = 1; column = 0;
				break;
			case 5:
				row = 1; column = 1;
				break;
			case 6:
				row = 1; column = 2;
				break;
			case 7:
				row = 2; column = 0;
				break;
			case 8:
				row = 2; column = 1;
				break;
			case 9:
				row = 2; column = 2;
				break;
			default:
				cout << "Invalid input, try again" << endl;
				break;
		}
		
		if (grid[row][column] != 'O' && grid[row][column] != 'X'){
			grid[row][column] = 'X';
		} else{
			cout << "That square is already taken" << endl;
		}
	}
}

