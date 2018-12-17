#include <iostream>
#include<math.h>
using namespace std;

int main()
{int n=0,xi,yi,xo=0,yo=0,s,t=0,x,y,a,b,ag;

    cout << "enter the cordinates" << endl;
    cin>>xi;
    cin>>yi;
    while(xi!=xo && yi!=yo)
    {
        n++;
        x=xi-xo;
        y=yi-yo;
        a=pow(x,2);
        b=pow(y,2);
        s=sqrt(a+b);
        t=t+s;
        xo=xi;
        yo=yi;
        cin >> xi;
        cin >> yi;
    }
    ag=t/n;
    cout<<t;
    cout<<"\n"<<n;
    cout<<"\n"<<ag;

    return 0;
}
