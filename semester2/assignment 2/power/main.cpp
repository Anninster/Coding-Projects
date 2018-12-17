#include <iostream>

using namespace std;
float mypower(int a,int b);
int main()
{
    int base,power;
    cout << "enter base: ";
    cin >> base;
    cout << "enter power: ";
    cin >> power;
    cout << base << " power " << power << ": " << mypower(base,power);
    return 0;
}
float mypower(int a,int b)
{
    int result=1;
    for (int i=1;i<=b;i++)
    {
        result=result*a;
    }
    return result;
}
