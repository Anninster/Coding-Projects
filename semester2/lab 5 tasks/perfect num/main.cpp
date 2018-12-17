#include <iostream>

using namespace std;
bool myperfect(int x);
int main()
{
    int num=6,n=1,z;
    while (n<5)
    {
        z=myperfect(num);
        if (z==1)
        {
            cout << num;
            cout << "\n";
            n++;
        }
        num++;
    }
    cout << "33550336";
    return 0;
}
bool myperfect(int x)
{
    int h=0;
    for (int i=1;i<=x/2;i++)
    {
        if (x%i==0)
        {
            h=h+i;
        }

    }
    if (h==x)
    {
        return true;
    }
    if (h!=x)
    {
        return false;
    }
}
