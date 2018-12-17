#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
using namespace std;
void reducedech(float **mat,int m,int n);
void echolon(float **mat,int m,int n);
ofstream out("result.txt");
int main()
{
    float **mat;
    int m,n,choise;
    cout << "enter the size of rows: ";
    cin >> m;
    mat=(float **)malloc(m*sizeof(float*));
    cout << "enter the size of columns: ";
    cin >> n;
    for (int i=0;i<m;i++)
    {
        mat[i]=(float *)malloc(n*sizeof(float));
    }
    system("cls");
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout << "enter the value of "<< i+1 << " " <<j+1<<"th element: ";
            cin >> mat[i][j];
        }
    }
    cout << "what do you want to do : "<<endl<<"1=echeolon form"<<endl<<"2=reduced row echelon"<<endl;
    cout << "so pick your choice: ";
    cin >> choise;
    switch (choise)
    {
    case 1:
        echolon(mat,m,n);
        break;
    case 2:
        reducedech(mat,m,n);
        break;
    }

    delete(mat);
    return 0;
}
void reducedech(float **mat,int m,int n)
{
    float mult,devide;
    for (int i=0;i<m;i++)
    {
        mult=mat[i][i];
        out << "row" << i+1<<" devided by "<< mult<<endl;
        for (int j=0;j<n;j++)
        {
            mat[i][j]=mat[i][j]/mult;
        }
        for (int j=i+1;j<m;j++)
        {
            devide=mat[j][i];
            out << "row" << j+1<< " - " << "row"<< i+1 << " x " << devide<<endl;
            for (int k=0;k<n;k++)
            {
                mat[j][k]=mat[j][k]-(devide*mat[i][k]);
            }
        }
    }
    for (int i=m-1;i>=0;i--)
    {
        for (int j=0;j<i;j++)
        {
            mult=mat[j][i];
            out << "row"<<j+1<< " - " << "row"<<i+1<<" x " <<mult;
            for(int k=0;k<n;k++)
            {
                mat[j][k]=mat[j][k]-(mult*mat[i][k]);
            }
        }
    }
    FILE *data=fopen("result.txt","r");
    int x;
    char ch;
    cout << "do you want to see the result in steps(1) or just the resulted matrix(2): ";
    cin >> x;
    if(x==1)
    {
        system("cls");
        ch=fgetc(data);
        while (ch!=EOF)
        {
            cout << ch;
            ch=fgetc(data);
        }
        fclose(data);
    }
    else
    {
        system("cls");
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                cout << mat[i][j]<<"     ";
            }
            cout <<endl;
        }
    }
}
void echolon(float **mat,int m,int n)
{
    float mult,devide;
    for (int i=0;i<m;i++)
    {
        mult=mat[i][i];
        out << "row" << i+1<<" devided by "<< mult<<endl;
        for (int j=0;j<n;j++)
        {
            mat[i][j]=mat[i][j]/mult;
        }
        for (int j=i+1;j<m;j++)
        {
            devide=mat[j][i];
            out << "row" << j+1<< " - " << "row"<< i+1 << " x " << devide<<endl;
            for (int k=0;k<n;k++)
            {
                mat[j][k]=mat[j][k]-(devide*mat[i][k]);
            }
        }
    }
    FILE *data=fopen("result.txt","r");
    int x;
    char ch;
    cout << "do you want to see the result in steps(1) or just the resulted matrix(2): ";
    cin >> x;
   if(x==1)
    {
        system("cls");
        ch=fgetc(data);
        while (ch!=EOF)
        {
            cout << ch;
            ch=fgetc(data);
        }
        fclose(data);
    }
    else
    {
        system("cls");
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                cout << mat[i][j]<<"     ";
            }
            cout <<endl;
        }
    }
}
