#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;
void quicksort(int a[],int lw,int rw);
int n;
int main()
{

    cout << "enter the number of elements: ";
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        a[i]=rand()%10+1;
    }
    cout << "values before sorting: \n";
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<< "   ";
    }
    cout <<endl;
    quicksort(a,0,n-2);
    cout <<endl<<"array after first check: "<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<< "    " ;
    }
    cout <<endl;
    return 0;
}
void quicksort(int a[],int lw,int rw)
{
    int j=rw;
    int i=lw;
    while (i<=j)
    {
       while (a[i]<a[rw+1])
       {
           i++;
       }
       while (a[j]>=a[rw+1])
       {
           j--;
       }
       if(i<=j)
       {
           swap(a[i],a[j]);
           i++;
           j--;
       }

    }
    swap(a[i],a[rw+1]);
    Sleep(100);
    for (int v=0;v<n;v++)
       {
           cout << a[v]<< "   ";
       }
       cout << i << " : "<< j<<endl;;
    if(lw<j)
        quicksort(a,lw,j-1);
    if(rw>i)
        quicksort(a,i,rw);

}
