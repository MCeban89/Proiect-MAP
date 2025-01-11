#include <iostream>
#include "utils.h"
using namespace std;


bool isSafe(int t[MAX][MAX],int row, int col)
{
    for(int i=0; i< col; i++)
    {
        if(t[row][i])
            return false;
    }

    for(int i = row, j = col; i >= 0; i--, j--)
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
        cout << counter;
        counter++;
        afisare(t,MAX);
        return true;
    }


} 

void initialization(int t[MAX][MAX])
{
    int counter = 0;
    solut(t,0,counter);
    cout << "Numarul de solutii: "<< counter<< endl;
}
