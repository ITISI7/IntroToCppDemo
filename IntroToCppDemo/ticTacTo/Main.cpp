#include <iostream>
#include <ctime>
#include <cmath>

int main()
{
	using std::cout;
	using std::endl;
	using std::cin;
	char board[3][3] = { '_','_','_','_','_','_','_','_','_', };
	// Depending on which player turn is true will print out X or O
	char pick = 'X';
	// Player pick of which row and column
	int pickRow = 0;
	int pickColumn = 0;
	bool player1Turn = true;
	bool player2Turn = false;
	bool gameOver = false;
	// Game loop
	while (!gameOver)
	{
		// Start menu
		cout << "player 1 start" << endl;
		cout << "pick your row" << endl;
		cin >> pickRow;
		cout << "pick your column" << endl;
		cin >> pickColumn;
		// change option from 0,1,2 to 1,2,3 making easier to visualize the board
		pickRow -= 1;
		pickColumn -= 1;

		// if the board have '_' then they can overwrite it 
		if (board[pickRow][pickColumn] == '_')
		{
			// Print out who turn depending on which player turn is true
			int turn = 1;

			if (player1Turn == true)
			{
				pick = 'X';
				turn = 2;
			}
			else if (player2Turn == true)
			{
				pick = 'O';
				turn = 1;
			}
			// player choice choose which array index to change and player turn determine if X or O will be printed
			board[pickRow][pickColumn] = pick;
			cout << board[0][0] << " " << board[1][0] << " " << board[2][0] << endl;
			cout << board[0][1] << " " << board[1][1] << " " << board[2][1] << endl;
			cout << board[0][2] << " " << board[1][2] << " " << board[2][2] << endl;
			cout << "Player " << turn << " turn" << endl;
			cout << "type q to quit" << endl;
		}
		// win condition for player 1
		else if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X' || board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X' || board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X' || board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X' || board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X' || board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X' || board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X' || board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X')
		{
			cout << "player 1 wins" << endl;
			gameOver = true;
		}
		// win codition for player 2
		else if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O' || board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O' || board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O' || board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O' || board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O' || board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O' || board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O' || board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O')
		{
			cout << "player 2 wins" << endl;
			gameOver = true;
		}
		else
		{
			cout << "Invalde" << endl;
		}
		// Switch player turn
		player1Turn = !player1Turn;
		player2Turn = !player2Turn;


	}
	
	


}