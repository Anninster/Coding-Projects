#include <iostream>

using namespace std;
void fact(float &n);
void perm(float &x,float &n,float &r);
int main()
{
    float n,r,a,b,perma;
    cout << "enter the value of n: ";
    cin >> n;
    cout << "enter the value of r: ";
    cin >> r;
    a=n;
    b=n-r;
    fact(a);
    fact(b);
    perm(perma,a,b);
    cout << "factorial of " << n << " is: "<< a<<endl;
    cout << n << " P "<< r << " = " << perma ;
    return 0;
}
void fact(float &n)
{
    for (int i=n-1;i>1;i--)
    {
        n=n*i;
    }
}
void perm(float &x,float &n,float &b)
{
    x=n/b;
}
