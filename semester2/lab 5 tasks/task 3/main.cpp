#include <iostream>

using namespace std;
bool prime(int a);
int main()
{
    int num=2,n=1,z;
    while (n<100)
    {
        z=prime(num);
        if (z==1)
        {
            cout << num ;
            cout << "\n";
            num++;
            n++;
        }
        if (z==0)
        {
            num++;
        }

    }
    return 0;
}
bool prime(int a)
{
    for (int i=2;i<=a/2;i++)
    {
        if (a%i==0)
        {
            return false;
        }
        if (a%i!=0 && i==a/2)
        {
            break;
        }
    }
    return true;
}
