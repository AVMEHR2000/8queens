#include "ChessBoardState.h"
ChessBoardState::ChessBoardState()
{
	for (size_t i = 0; i < 8; i++)
	{
		state[i] = 0;
	}
}

// this function add a queen to board
//void ChessBoardState::addQueen(int column, int raw)
//{
//	// TODO: Add your implementation code here.
//}
