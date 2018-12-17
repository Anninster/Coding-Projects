#include <iostream>
#include <stdlib.h>
using namespace std;
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
    if(lw<j)
        quicksort(a,lw,j-1);
    if(rw>i)
        quicksort(a,i,rw);

};
int binsearch(int a[],int kea,int lw,int hw)
{
    if(lw > hw)
    {
        return -1;
    }
    int midd=(lw+hw)/2;
    if(kea==a[midd])
    {
        return midd;
    }
    else if (kea>a[midd])
    {
        return binsearch(a,kea,midd+1,hw);
    }
    else
    {
        return binsearch(a,kea,lw,midd-1);
    }
};
int main()
{
    int kea,x,lw=0;
    cout << "enter the size of array: ";
    cin >> x;
    int hw=x-1;
    int arr[x];
    for (int i=0;i<x;i++)
    {
        arr[i]=rand()%1000+1;
        cout << arr[i]<<"  ";

    }
    quicksort(arr,0,x-2);
    for (int i=0;i<x;i++)
    {
        cout << arr[i]<<"  ";
    }
    cout <<endl<< "enter the key: ";
    cin >> kea;
    int index;
    index=binsearch(arr,kea,lw,hw);
    if(index==-1)
    {
        cout << "key is not found in the array: ";
    }
    else
    {
        cout << "the key is found at index: "<<index;
    }
    return 0;
}
