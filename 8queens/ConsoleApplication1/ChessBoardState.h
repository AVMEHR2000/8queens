#pragma once
class ChessBoardState
{

public:
	ChessBoardState();
	//this array saves each collumn queens location.if a collumn hasent queen its value is zero.
	int state[8];
	// this method checks the current state is goal or not.if it is goal then returns 1 else returns 0.
	int IsGoal();
	// this function shows board state
	void ShowBoard();
	// this function add a queen to board
	void addQueen(int column, int raw);
	// this method cleans board from all queens
	void Clean();
};

