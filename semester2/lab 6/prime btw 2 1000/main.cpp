#include <iostream>

using namespace std;
bool prime(int a);
int main()
{
    int num1=1;
    for (int i=2;i<=1000;i++)
    {
        if (prime(i))
        {
            cout << i <<"\n";
            num1++;
        }
    }
    cout << "\n\nnumber of prime numbers: "<< num1;
    cout << "\n\n";
    return 0;
}
bool prime(int a)
{
    for (int i=2;i<a;i++)
    {
        if (a%i==0)
            return false;
    }
    return true;
}
