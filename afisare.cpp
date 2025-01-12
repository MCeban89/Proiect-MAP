#include <iostream>
#include "utils.h"

using namespace std;

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
