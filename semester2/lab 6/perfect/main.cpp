#include <iostream>

using namespace std;
bool myperfect(int a);
void myfactors(int a);
int main()
{
    int nama=1;
    for (int i=6;nama<5;i++)
    {
        if (myperfect(i))
        {
            cout << i << " is a perfect number\n" ;
            myfactors(i);
            nama++;
            cout << "\n\n";
        }
    }
    return 0;
}
bool myperfect(int a)
{
    int sum=0;
    for (int i=1;i<a;i++)
    {
        if (a%i==0)
        {
            sum=sum+i;
        }
    }
    if (sum==a)
        return true;
    else
        return false;
}
void myfactors(int a)
{
    for (int i=1;i<a;i++)
    {
        if(a%i==0)
        {
            if (i==1)
            {
                cout << i ;
            }
            else
                cout<< " + " << i ;


        }
    }
    cout << " = " << a;
}
