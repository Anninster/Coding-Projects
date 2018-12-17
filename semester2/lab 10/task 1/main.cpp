#include <iostream>
#include <stdlib.h>
using namespace std;
int *mysort(int b[],int c)
{
    int *ptrw;
    for (int i=0;i<c-1;i++)
    {
        for (int j=i+1;j<c;j++)
        {
            if(b[i]<b[j])
                swap(b[i],b[j]);
        }
    }
    ptrw=b;
    return ptrw;
}
int main()
{
    int x,*b;
    cout << "enter the size of array: ";
    cin >> x;
    int a[x];
    for (int i=0;i<x;i++)
    {
        a[i]=rand()%100+1;
        cout << a[i]<<"\t";
    }
    b=mysort(a,x);
    cout <<endl<< "after sorting : "<<endl;
    for (int i=0;i<x;i++)
    {
        cout << *(b+i)<<"\t";
    }
    return 0;
}
