#include <iostream>
#include <math.h>
using namespace std;
float mypower(float a,int p);
float fat(float k);
int main()
{
    float x,k,num,pow,fact,result1=0;
    cout << "enter the number: ";
    cin >> x;
    cout << "enter the value of k: ";
    cin >> k;
    for (int i=0;i<=k;i++)
    {
        pow=mypower(x,i);
        fact=fat(i);
    }
    return 0;
}
