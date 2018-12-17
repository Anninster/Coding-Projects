#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int x,y;
    cout << "enter the number of rows: ";
    cin >> x;
    cout << "enter number of columns: ";
    cin >> y;
    int **p=(int **)malloc(x*sizeof(int*));
    for (int i=0;i<x;i++)
    {
        p[i]=new int(y);
    }
    for (int i=0;i<x;i++)
        for (int j=0;j<y;j++)
        {
            cin >> p[i][j];
        }
    for (int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++)
        {
            cout << p[i][j]<<"     ";
        }
        cout <<endl;
    }

    return 0;
}
