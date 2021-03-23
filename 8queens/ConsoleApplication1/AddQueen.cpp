#include "ChessBoardState.h"
#include <iostream>
using namespace std;

void ChessBoardState::addQueen(int column, int raw)
{
	// TODO: Add your implementation code here.
	if (0 < column < 9 && 0 < raw < 9)
	{
		state[column - 1] = raw;
	}
	else
	{
		cout << "invalid arguments";
	}
}
