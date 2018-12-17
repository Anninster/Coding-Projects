#include <iostream>

using namespace std;
float a[3][3];
float b[3][3];
void adjointb(int x,int y)
{
    if(x==0)
    {
        if(y==0)
            b[x][y]=(a[1][1]*a[2][2])-(a[1][2]*a[2][1]);
        if(y==1)
            b[x][y]=-1*((a[0][1]*a[2][2])-(a[0][2]*a[2][1]));
        if(y==2)
            b[x][y]=(a[0][1]*a[1][2])-(a[0][2]*a[1][1]);
    }
    if(x==1)
    {
        if(y==0)
            b[x][y]=-1*((a[1][0]*a[2][2])-(a[1][2]*a[2][0]));
        if(y==1)
            b[x][y]=(a[0][0]*a[2][2])-(a[0][2]*a[2][0]);
        if(y==2)
            b[x][y]=-1*((a[0][0]*a[1][2])-(a[0][2]*a[1][0]));
    }
    if(x==2)
    {
        if(y==0)
            b[x][y]=(a[1][0]*a[2][1])-(a[1][1]*a[2][0]);
        if(y==1)
            b[x][y]=-1*((a[0][0]*a[2][1])-(a[0][1]*a[2][0]));
        if(y==2)
            b[x][y]=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
    }

};
int main()
{
    float mods=0;
    cout << "enter your matrix:"<<endl;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout << "enter value for "<< i+1<<"th row and "<< j+1 << "th column element: ";
            cin>>a[i][j];
        }
    }
    mods=a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2])-a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2])+a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]);
    if(mods==0)
    {
        cout << "this matrix has no inverse because it is singular matrix thus ending program";
        return 0;
    }
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            adjointb(i,j);
            b[i][j]/=mods;
        }
    }
    cout << "mod of matrix A= "<< mods<<endl;
    cout << "inverse of matrix= " << endl;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout << b[i][j]<<"      ";
        }
        cout <<endl;
    }
    return 0;
}
