#include "ChessBoardState.h"



// this method cleans board from all queens
void ChessBoardState::Clean()
{
	// TODO: Add your implementation code here.
	for (size_t i = 0; i < 8; i++)
	{
		state[i] = 0;
	}
}
