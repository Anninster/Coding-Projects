#include <iostream>

using namespace std;
int mylcm(int a,int b);
int main()
{
    int num1,num2;
    cout << "enter first number: ";
    cin >> num1;
    cout << "enter second number: ";
    cin >> num2;

    cout<< "lcm of " << num1 << " and " << num2 << " = " << mylcm(num1,num2);
    return 0;
}
int mylcm(int a,int b)
{
    for (int i=a;i<=a*b;i++)
        {
            if (i%a==0 && i%b==0)
            {
                return i;
            }
        }
}
