#include <iostream>

using namespace std;
int myhcf(int a,int b);
int main()
{
    int a,b,hcf;
    cout << "enter first number: ";
    cin >> a;
    cout << "enter second number: ";
    cin >> b;

    hcf=myhcf(a,b);
    cout << "hcf of " << a << " and " << b << ": " << hcf;
    return 0;
}
int myhcf(int a,int b)
{
    int num1,num2,num3;
    if (a>=b)
        {
            num1=a;
            num2=b;
        }
    else
        {
            num1=b;
            num2=a;
        }
    while (num3!=0)
        {
            num3=num1-(num2*(num1/num2));
            num1=num2;
            num2=num3;
        }
    return num1;
}
