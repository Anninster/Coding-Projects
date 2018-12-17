#include <iostream>
using namespace std;
void seap(int &n,int &r)
{
    n=n+r;
    r=n-r;
    n=n-r;
};
int main()
{
    int a[10];
    int minim,maxim;
    for (int i=0;i<10;i++)
    {
        cout <<"enter value of num at " << i << ": ";
        cin >> a[i];
    }
    minim=a[0];
    maxim=a[0];
    for (int i=1;i<10;i++)
    {
        if (a[i]<minim)
            minim=a[i];
    }
    for (int i=1;i<10;i++)
    {
        if(a[i]>maxim)
            maxim=a[i];
    }
    for (int i=0;i<10;i++)
    {
        for (int j=i+1;j<10;j++)
        {
            if (a[i]>a[j])
                seap(a[i],a[j]);
        }
    }

    cout << "smallest number : " << minim;
    cout <<endl<< "largest number: "<< maxim<<endl;
    for (int i=0;i<10;i++)
    {
        cout << a[i]<<endl;
    }

    return 0;
}
