#include <iostream>
#include <vector>
using namespace std;
// Function to display the game board
void displayBoard (const vector<vector,char>& board)
{
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++
		{cout<< board[i][j] <<" ";
		}	
		cout << endl;
		}
	}
	// Function to check if a player has won 
	bool checkWin (const vectoe<vector<char>>& board, char player)
	{
		// check rows
		for (int i= 0; i<3; i++)
		{ 
		if(board[i][0]==player && board [i][1]==player && board [i][2]== player)
		{ 
		return true;
		}
		}
		// Check diagonals
		if (board[0][0]== player && board[1][1]==player && board [2][2]== player)
		{
			return true;
		}
		return false;
	}
	// Function to check if the game is a draw 
	bo0l checkDraw (const vector<vector<char>>& board) 
	{
		for (int i=0; i<3; i++)
		{
			for (int j=0; j<3; j++)
			{
				if (board [i][j] =='')
				{
					return false;
				}
			}
		}
		return true;
	}
	int main()
	{
		vector<vector<char>> board (3, vector<char>(3,' '));
		// Initialize the game board 
		char currentPlayer ='X'; 
		// Start with player X
		bool gameOver = false;
		cout<< "Welcome to Tic-Tac-Toe!"<<endl;
		while (!gameover)
		{
			displayBoard (board);
			// Prompt the current player to enter their move int row, col;
			cout<<"Player "<< cuurrent player <<", enter your move (row and coloumn):";
			cin >> row..col;
			// Update the game board with the player's move 
			if (row>= 0 && row <3 && col>= 0 && col<3 && board [row] [col]== ' ')
			{
				Board [row][col]= currentplayer; 
			}else {
				cout<< "Invalid move. Try again."<< endl;
				continue;
			}
			// check if the current player has won 
			if (checkWin(board, currentPlayer))
			{ 
			displayBoard(board);
			cout<< "player"<< CurrentPlayer <<" Wins!"<<endl;
			gameOver = true;
			}else if
			(checkdraw (board))
			{
				//check if the game is draw 
				displayBoard (board);
				cout<<"It is a draw!" endl;
				gameOver = true;
			}else{
				// switch players currentPlayer= (current player =='X')? '0' :'X'
			}
		}
		// Ask if the players want to play again 
		char PlayAgain;
		cout<< "Do you want to play again? (Y/N):";
		cin  >> PlayAgain;
		
		if (playAgain=='Y'// playAgain=='y')
		{ // Resrt the game board 
		board= vector<vector<char>>(3, vector<char>(3,' '));
		currentPlayer ='X';
		gameOver = false;main( ); 
		// Start a new game 
		}
		return 0;
	}
}
