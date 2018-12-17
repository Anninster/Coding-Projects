#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n,k;
    int *p;
    cout << "enter the size of array: ";
    cin >> n;
    p=(int *)malloc(n*sizeof(int));
    for (int i=0;i<n;i++)
    {
        cout << "enter value of "<< i+1 << "th element: ";
        cin >> p[i];
    }
    cout << endl<<endl;
    for (int i=0;i<n;i++)
    {
        cout << p[i]<<"   ";
    }
    cout << endl;
    cout << "enter the size you want to increase :";
    cin >> k;
    cout <<endl;
    realloc(p,(n+k)*sizeof(int));
    for (int i=n;i<n+k;i++)
    {
        cin >> p[i];
    }
    cout <<endl;
    for (int i=0;i<n+k;i++)
    {
        cout << p[i]<<"    ";
    }
    delete(p);

    return 0;
}
