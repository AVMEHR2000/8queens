#include <iostream>
#include <time.h>
#include <string>
#include "ChessBoardState.h"
using namespace std;
int main()
{
    ChessBoardState myboard;
    //third search algorithm
    int temp[8];
    int NumberOfCheckedStates = 0;
    clock_t tStart = clock();
   /* for (size_t i = 1; i < 9; i++)
    {
        for (size_t j = 1; j < 9; j++)
        {
            for (size_t k = 1; k < 9; k++)
            {
                for (size_t l = 1; l < 9; l++)
                {
                    for (size_t m = 1; m < 9; m++)
                    {
                        for (size_t n = 1; n < 9; n++)
                        {
                            for (size_t o = 1; o < 9; o++)
                            {
                                for (size_t p = 1; p < 9; p++)
                                {
                                    temp[0] = i;
                                    temp[1] = j;
                                    temp[2] = k;
                                    temp[3] = l;
                                    temp[4] = m;
                                    temp[5] = n;
                                    temp[6] = o;
                                    temp[7] = p;
                                    for (size_t q = 1; q < 9; q++)
                                    {
                                        myboard.addQueen(q, temp[q - 1]);
                                    }
                                    if (myboard.IsGoal())
                                    {
                                        myboard.ShowBoard();
                                        cout << endl;
                                        NumberOfCheckedStates++;
                                    }
                                    else
                                    {
                                        myboard.Clean();
                                        NumberOfCheckedStates++;
                                    }
                                }

                            }
                        }

                    }
                }

            }
        }

    }*/
  
    //last search algorithm
    for (size_t i = 1; i < 9; i++)
    {
        for (size_t j = 1; j < 9; j++)
        {
            if(i!=j&&i!=j+1&&i!=j+1)
            for (size_t k = 1; k < 9; k++)
            {
                if(i!=k&&k!=j&& k != j+1&& k != j-1)
                for (size_t l = 1; l < 9; l++)
                {
                    if(i!=l&&l!=j&&l!=k&&l!=k+1&&l!=k-1)
                    for (size_t m = 1; m < 9; m++)
                    {
                        if(i != m && m != j && m != k &&m!=l&& m != l + 1 && m != l - 1)
                        for (size_t n = 1; n < 9; n++)
                        {
                            if(i != n && n != j && n != k && n != l &&n!=m&& n != m + 1 && n != m - 1)
                            for (size_t o = 1; o < 9; o++)
                            {
                                if (i != o && o != j && o != k && o != l && o != m &&o!=n&& o != n + 1 && o != n - 1)
                                for (size_t p = 1; p < 9; p++)
                                {
                                    if (i != p && p != j && p != k && p != l && p != m && p != n &&p!=o&& p != o + 1 && p != o - 1)
                                    {
                                        temp[0] = i;
                                        temp[1] = j;
                                        temp[2] = k;
                                        temp[3] = l;
                                        temp[4] = m;
                                        temp[5] = n;
                                        temp[6] = o;
                                        temp[7] = p;
                                        for (size_t q = 1; q < 9; q++)
                                        {
                                            myboard.addQueen(q, temp[q - 1]);
                                        }
                                        if (myboard.IsGoal())
                                        {
                                            myboard.ShowBoard();
                                            cout << endl;
                                            NumberOfCheckedStates++;
                                        }
                                        else
                                        {
                                            NumberOfCheckedStates++;
                                            myboard.Clean();
                                        }
                                    }
                                  
                                }

                            }
                        }

                    }
                }

            }
        }

    }
    cout << "Number of checked states:" << NumberOfCheckedStates << endl;
    printf("Time taken: %.2fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
}




