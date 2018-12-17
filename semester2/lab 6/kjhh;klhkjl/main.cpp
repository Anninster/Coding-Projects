#include <iostream>
using namespace std;
void div(int x);
bool perfect(long x);
int main()
{   long n;
     long ct=1;


    for ( n=6;ct<5; n++)
    {
        if (perfect(n))
        {
            cout<<n<< " is a perfect number:  " <<endl;
            div(n);
            ct++;
        }

    }
    return 0;
}
bool perfect(long x)
{ long sum=0,r;


   for (long i=1; i<x; i++)
    {
        r=x%i;
        if (r==0)
        {
            sum=sum+i;
        }

    }
    if (sum==x)
        {
            return true;
        }
    return false;


    }
void div(int x)
  {

      for (int q=1; q<x; q++)
      {
          if (x%q==0 && q!=1)
            {

                cout  << " + "<< q ;
            }
            if (x%q==0 && q==1)
            {
                cout << q;
            }
      }
      cout << " = " << x<<endl<<endl;

  }
