#include <iostream>
using namespace std;
void seap(int &a,int &b);
int main()
{
    int a[10];
    for (int i=0;i<10;i++)
    {
        cout << "enter the values of the array " << i <<" : ";
        cin >> a[i];
    }
    for (int i=0;i<10;i++)
    {
        for (int j=i+1;j<10;j++)
        {
            if (a[i]<a[j])
            {
                seap(a[i],a[j]);
            }
        }
    }
    cout << a[0];
    for (int i=1;i<10;i++)
    {
        cout << " , " << a[i];
    }
    return 0;
}
void seap(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
