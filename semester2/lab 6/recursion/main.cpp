#include <iostream>
#include <math.h>
using namespace std;
float myfact(float a);
float mypower(float x,float k);
int main()
{
    float x,k,a,b;
    float sum=0;
    cout << "enter the no for x" << endl;
    cin>>x;
    cout<<"enter the no for K"<<endl;
    cin>>k;
    for (float q=0; q<=k; q++)
    {
        a=mypower(x,q);
        b=myfact(q);
        sum=sum+a/b;
    }
    cout<<"The answer is "<<sum;
    return 0;}
    float mypower(float x,float k)
    {
        int j=pow(x,k);
        return j ;
    }
float myfact (float a)
{
    if (a<=1)
    {
        return 1;
    }
      return a*myfact(a-1);
    }
