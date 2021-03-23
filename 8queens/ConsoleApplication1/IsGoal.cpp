#include "ChessBoardState.h"



// this method checks the current state is goal or not.if it is state then returns 1 else returns 0.
int ChessBoardState::IsGoal()
{
	//all input cheking
	for (size_t i = 0; i < 8; i++)
	{
		if(state[i]<1)
			return 0; 
	}
	//raw cheking
	for (size_t i = 0; i < 8; i++)
	{
		for (size_t j = 0; j < 8; j++)
		{
			if (state[i] ==state[j]&&i!=j )
				return 0;
		}
		
	}
	//diameters cheking
	int diffrences[8];
	int sums[8];
	for (size_t i = 0; i <8; i++)
	{
		sums[i] = i + 1 + state[i];
		diffrences[i] = state[i] - i - 1;
	}
	for (size_t i = 0; i < 8; i++)
	{
		for (size_t j = 0; j < i; j++)
		{
			if (sums[i] == sums[j]||diffrences[i]==diffrences[j])
			{
				return 0;
			}
			


		}
	}
	return 1;

   
}
