#include <iostream>
#include "utils.h"
using namespace std;

void blockQueenMoves(int t[MAX][MAX], int lin, int col)
{
    for(int i = 0; i < MAX; i++)
    {
        t[lin][i] = 1;
        t[i][col] = 1;
    }

    for( int i = -MAX; i < MAX; i++)
    {
        if(lin + i >= 0 && lin + i < MAX && col + i >= 0 && col + i < MAX)
        t[lin + i][col + i] = 1;
        if(lin + i >= 0 && lin + i < MAX && col -i >= 0 && col - i < MAX)
        t[lin + i][col - i] = 1;
    }


}

void solution(int t[MAX][MAX])
{
    for(int i = 1; i < MAX; i++)
    {
        t[i][1] = 1;
        blockQueenMoves(t, i, 1);
        afisare(t,MAX);
        for(int j = 0; j < MAX; j++)
        {
            for(int k = 0; k < MAX; k++)
            {
                t[j][k] = 0;
            }
        }
        cout << endl;
        //break;
    }
}