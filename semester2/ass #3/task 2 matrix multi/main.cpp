#include <iostream>

using namespace std;

int main()
{
    lable:
    int x,y,m,n;
    cout << "enter the row and coloums of matrix A respectively: \n";
    cin >> x;
    cin >> y;
    cout << "\nenter the row and coloums of matrix B respectively: \n";
    cin >> m;
    cin >> n;
    float a[x][y];
    float b[m][n];
    float c[x][n];
    if(y!=m)
    {
        cout << "these matrices are not multipliable enter their dimensions again: ";
        goto lable;
    }
    cout << "enter values for matrix a:"<<endl;
    for (int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++)
        {
            cout << "enter value of : a " <<i<<" "<<j<< " : ";
            cin >> a[i][j];
        }

    }
    cout <<endl<<endl<<"enter values for matrix b:"<<endl;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout << "enter value of : b " <<i<<" "<<j<< " : ";
            cin >> b[i][j];
        }

    }
    for (int i=0;i<x;i++)
    {
        for (int j=0;j<n;j++)
        {
            c[i][j]=0;
        }
    }
    for (int i=0;i<x;i++)
    {
        for (int j=0;j<n;j++)
        {
            for (int k=0;k<m;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    cout <<endl<<endl<< "A x B matrix = C = \n";
    for (int i=0;i<x;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout << c[i][j]<<"\t";
        }
        cout <<endl;
    }
    return 0;
}
