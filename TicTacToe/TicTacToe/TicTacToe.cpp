#include <iostream>
#include <cstdlib>

using namespace std;

char grid[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char currentPlayer = 'X';
int playerInput = 0;
int row = 0;
int column = 0;

void displayGrid(){
	cout << ' ' << grid[0][0] << '|' << grid[0][1] << '|' << grid[0][2] << endl;
	cout << "-------" << endl;
	cout << ' ' << grid[1][0] << '|' << grid[1][1] << '|' << grid[1][2] << endl;
	cout << "-------" << endl;
	cout << ' ' << grid[2][0] << '|' << grid[2][1] << '|' << grid[2][2] << endl << endl;
}

void gameTurn(){
	if (currentPlayer == 'X'){
		cout << "Player(X)'s turn!" << endl;
		cout << "Choose a location on the board to place X " << endl;
		cin >> playerInput;
	}
	if (currentPlayer == 'O'){
		cout << "Computer(O)'s turn!" << endl;
		playerInput = (rand() % 9) + 1;
		cout << "The computer chose " << playerInput << endl;
	}

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

	if (currentPlayer == 'X' && grid[row][column] != 'O' && grid[row][column] != 'X'){
		grid[row][column] = 'X';
		currentPlayer = 'O';
	} else if(currentPlayer == 'O' && grid[row][column] != 'O' && grid[row][column] != 'X'){
		grid[row][column] = 'O';
		currentPlayer = 'X';
	} else{
		cout << "That square is already taken" << endl;
		gameTurn();
	}
}

bool gameOver(){
	for(int i = 0; i < 3; i++){
		if(grid[i][0] == grid[i][1] && grid[i][0] == grid[i][2] || grid[0][i] == grid[1][i] && grid[0][i] == grid[2][i]){
			return true;
		}
	}
	if(grid[0][0] == grid[1][1] && grid[0][0] == grid[2][2] || grid[0][2] == grid[1][1] && grid[2][0] == grid[0][2]){
		return true;
	}
	return false;
}

int main() {
	srand(time(0));
	
	displayGrid();
	
	while (!gameOver()){
		gameTurn();
		displayGrid();
	}
	
	if(currentPlayer == 'O'){
		cout << "Player(X) wins!" << endl;
	} else{
		cout << "The computer(O) wins!" << endl;
	}
}

