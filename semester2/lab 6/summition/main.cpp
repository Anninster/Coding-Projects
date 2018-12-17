#include <iostream>
#include <cmath>
using namespace std;
float mypower(float a,float b);
float myfact(float b);
int main()
{
    float x,y=0,n;
    cout << "enter the value of x: ";
    cin >> x;
    cout << "enter the value of n: ";
    cin >> n;
    for (int num=0;num<=n;num++)
    {
        y=y+(mypower(x,num)/myfact(num));
    }
    cout << "y= " << y;
    return 0;
}
float mypower(float a,float b)
{
    float num2=1;
    for (int i=0;i<b;i++)
    {
        num2=num2*a;
    }
    return num2;
}
float myfact(float b)
{
    if (b<1)
    {
        return 1;
    }
    return b*myfact(b-1);
}
