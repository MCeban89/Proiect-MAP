#include <iostream>
using namespace std;
const int MAX = 8;

void afisare(int a[][MAX],int size)
{
    for(int i = 0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

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


int main()
{
    int t[MAX][MAX] = {0};

    initialization(t);
    return 0;
}
