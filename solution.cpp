#include <iostream>
#include "utils.h"
using namespace std;


bool isSafe(int t[MAX][MAX],int row, int col)
{
    for(int i=0; i  < col; i++)
    {
        if(t[row][i])
            return false;
    }

    for(int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if(t[i][j])
        return false;
    }

    for(int i = row, j = col; j >= 0 && i < MAX; i++, j--)
    {
        if(t[i][j])
            return false;
    }

    return true;
}


bool solut(int t[MAX][MAX], int col, int &counter)
{
    if (col == MAX)
    {
        counter++;
        afisare(t,MAX);
        return true;
    }

    bool res = false;
    for(int i = 0; i < MAX; i++)
    {
        if(isSafe(t, i, col))
        {
            t[i][col] = 1;
            solut(t, col + 1, counter);
            t[i][col] = 0;
        }
    }

    return res;
} 

void initialization(int t[MAX][MAX])
{
    int counter = 0;
    solut(t,0,counter);
    cout << "Numarul de solutii: "<< counter<< endl;
}
