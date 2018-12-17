#include <iostream>
#include <cmath>
using namespace std;
float dist(int x1,int x2,int y1,int y2);
float avg(float td,int t);
int main()
{
    int n=0,xi=0,yi=0,x=0,y=0;
    float s=0,t=0;
    cout << "enter new coordinates for xi= ";
    cin >> xi;
    cout << "enter new coordinates for yi= ";
    cin >> yi;
    while (xi!=x || yi!=y)
    {
        n=n+1;
        s=s+dist(x,xi,y,yi);
        t=t+s;
        x=xi;
        y=yi;
        cout << "********************************************************************************";
        cout << "enter new coordinates for xi: ";
        cin >> xi;
        cout << "enter new coordinates for yi: ";
        cin >> yi;
    }
    cout << "********************************************************************************";
    cout << "\n\n\ntotal distance traveled: " << t << "\n";
    cout << "the total number of time the point moved: " << n << "\n";
    if (n!=0)
    {
        cout << "the average distance traveled per step: " << avg(t,n);
    }
    else
    {
        cout << "the average distance traveled per step: 0";
    }
    return 0;
}
float dist(int x1,int x2,int y1,int y2)
{
    float s,a,b;
    a=pow((x2-x1),2);
    b=pow((y2-y1),2);
    s=sqrt(a+b);
    return s;
}
float avg(float td,int t)
{
    int avg=td/t;
    return avg;
}

