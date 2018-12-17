#include <iostream>

using namespace std;
int factors(int a);
bool che_ck(int a,int b,int c,int d);
int main()
{
    int sum1,sum2;
    for (int num1=1;num1<=2000;num1++)
    {
        for (int num2=1;num2<=2000;num2++)
        {
            sum1=factors(num1);
            sum2=factors(num2);
            if (che_ck(sum1,sum2,num1,num2))
            {
                if (num1!=num2)
                {
                    cout << num1 << ":" << num2 <<" , ";
                }
            }

        }
    }
    return 0;
}
int factors(int a)
{
    int sum=0;
    for (int i=1;i<=a/2;i++)
    {
        if (a%i==0)
        {
            sum=sum+i;
        }
    }
    return sum;
}
bool che_ck(int a,int b,int c,int d)
{
    if (a==d && b==c)
        return true;
    else
        return false;
}
