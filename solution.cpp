#include <iostream>
#include "utils.h"
using namespace std;



void s(int t[MAX][MAX], int col, int &counter)
{
    for(int i = 0; i < MAX; i++)
    {
        for(int m = 0; m < MAX; m++)
        {
            t[i][m] = 1;
        
            afisare(t,MAX);
            cout << endl;
            for(int j = 0; j < MAX; j++)
            {
                for(int k = 0; k < MAX; k++)
                {
                    t[j][k] = 0;
                }
            }
        }   
        cout << endl;
        //break;
    }
} 

void initialization(int t[MAX][MAX] )
{
    int counter = 0;
    s(t,0,counter);

}