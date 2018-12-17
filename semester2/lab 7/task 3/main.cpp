#include <iostream>
using namespace std;
void myswap(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
};
int main()
{
    int a[10];
    for (int i=0;i<10;i++)
    {
        cout << "enter the value for " << i+1<< "th element: ";
        cin >> a[i];
    }
    for (int i=0;i<10;i++)
    {
        for (int j=0;j<9;j++)
        {
            if (a[j]>a[j+1])
                myswap(a[j],a[j+1]);
        }
    }
    for (int i=0;i<10;i++)
    {
        cout << a[i]<< "    ";
    }
    return 0;
}
