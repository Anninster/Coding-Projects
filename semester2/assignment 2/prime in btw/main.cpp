#include <iostream>

using namespace std;
void isprime(int a,int b);
int main()
{

    int num1,num2;
    cout << "enter first number number: ";
    cin >> num1;
    cout << "enter second number: ";
    cin >> num2;
    isprime(num1,num2);
    return 0;
}
void isprime(int a,int b)
{
    int n=0;
    for (int x=a;x<=b;x++)
    {
        for (int i=2;i<=x-1;i++)
        {
            if (x%i==0)
                break;
            if (x%i!=0 && i==x-1)
                {
                    cout << x << ", ";
                    n++;
                }
        }
    }
    cout << "\nnumber of prime numbers: " << n;
}
