#include "ChessBoardState.h"
#include<iostream>
using namespace std;


// this function shows board state
void ChessBoardState::ShowBoard()
{
	// TODO: Add your implementation code here.
	int Board[8][8];
	for (int i = 0; i < 8; i++) 
	{
		if (state[i] > 0)
		{
			for (size_t j = 0; j < 8; j++)
			{
				if (j == state[i] - 1)
				{
					Board[j][i] = 1;
				}
				else
				{
					Board[j][i] = 0;
				}
				
			}
		}
		else
		{

			for (size_t j = 0; j < 8; j++)
			{
			Board[j][i] = 0;
			}
		}
	}
	for (size_t i = 0; i < 8; i++)
	{
		for (int j = 0; j <8; j++)
		{
			cout << Board[i][j]<<" ";
		}
		cout << endl;
	}
}
