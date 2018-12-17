#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main()
{
    int x,y,l=0;
    char a[200];
    cout <<"enter the main string: ";
    cin.getline(a,200);
    char b[200];
    cout<< "enter the words only:\n";
    cin.getline(b,200);
    x=strlen(a);
    y=strlen(b);
    for (int i=0;i<x;i++)
    {
        if (a[i]==b[0])
        {

            for (int z=1;z<y;z++)
            {
                if (a[i+z]!=b[z])
                    break;
                if (z==y-1)
                    l++;
            }
        }
    }
    cout << "the sub string: "<< b<<endl;
    cout << "in: "<<a<<endl;
    cout << "occurs " << l << " times";
    return 0;
}
