#include <iostream>
#include <stdlib.h>
using namespace std;
int *genaratearray(int x)
{
    int *arr=(int *)malloc(x*sizeof(int));
    for (int i=0;i<x;i++)
    {
        *(arr+i)=rand()%10+1;
    }
    return arr;
};
int *reallocas(int *arr,int n,int m)
{
    arr=(int *)realloc(arr,(n+m)*sizeof(int));
    cout << n+m<<endl;
    for (int i=n;i<(n+m);i++)
    {
        arr[i]=rand()%10+1;
    }
    for(int i=0;i<(n+m);i++)
    {
        cout << arr[i]<< "    ";
    }
    return arr;
};
void tofind(int *arr,int a,int b)
{
    for (int i=0;i<a;i++)
    {
        if (arr[i]==b)
        {
            cout << i << " ; "  <<arr[i]<< "   ::   ";
        }
    }

};
int main()
{
    int *arr,n,m,finaw;
    cout << "enter the size of array: ";
    cin >> n;
    arr=genaratearray(n);
    for (int i=0;i<n;i++)
    {
        cout << arr[i] << "    ";
    }
    cout << endl<<endl<< "enter the value by which you want to increase it: ";
    cin >> m;
    arr=reallocas(arr,n,m);
    cout<<endl<<endl<< "enter the number you want to find: ";
    cin >> finaw;
    tofind(arr,n+m,finaw);
    cout <<endl <<endl;
    for (int i=0;i<n+m;i++)
    {
        cout << arr[i] << "    ";
    }
    delete []arr;
    return 0;
}
