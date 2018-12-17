#include <iostream>

using namespace std;
bool prime(int a);
int main()
{
    int num,n;
    cout << "enter the number: ";
    cin >> num;
    n=prime(num);
    if (n==1)
    {
        cout << "number is prime";
        return 0;
    }
    if (n==0)
    {
        cout << "not prime";
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
