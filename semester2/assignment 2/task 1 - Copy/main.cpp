#include <iostream>

using namespace std;
bool isprime(int a);
int main()
{

    int num1;
    bool test;
    cout << "enter number to check: ";
    cin >> num1;
        test=isprime(num1);
        if (test)
         {
           cout << "is prime" ;
         }
         else
         {
             cout << "not prime";
         }
    return 0;
}
bool isprime(int a)
{
    for (int i=2;i<=a-1;i++)
    {
        if (a%i==0)
            return false;
        if (a%i!=0 && i==a-1)
            return true;
    }
    return true;
}
