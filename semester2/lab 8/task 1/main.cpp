#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int mypower(int a)
{
    int z=1;
    for (int i=1;i<=a;i++)
    {
        z=z*10;
    }
    return z;
};
int main()
{
    string numbera[9]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    string tens[8]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    string special[10]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string power[2]={"hundred","thousand"};
    int n,x=1,b;
    cout << "enter your PKR amount: \n";
    cin >> n;
    b=n;
    while (b>9)
    {
        b=b/10;
        x++;
    }
    b=n;
    int a[x];
    for (int i=x-1;i>=0;i--)
    {
        int y=mypower(i);
        a[i]=b/y;
        b=b%y;
    }
    cout << "\n\n\nyour amount in words are:\n\n";
    for (int i=x-1;i>=0;i--)
    {
        if(a[i]==1 && i==1  )
        {
            cout << special[a[i-1]];
            break;
        }
        if(a[i]>1 && i==1)
        {
            if(x>2)
                cout << "and " << tens[a[i]-2] << " " << numbera[a[i-1]-1];
            else
                cout << tens[a[i]-2] << " " << numbera[a[i-1]-1];
        }
        if (i>1)
        {
            cout << numbera[a[i]-1] << " " << power[i-2]<< " ";
        }
    }
    cout << "  only\n\n\n\n";
    return 0;
}
