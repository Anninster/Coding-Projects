#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    char fes[5][100];
    int x;
    for (int i=0;i<5;i++)
    {
        cout << "enter the name of " << i+1 << "th country: "<<endl;
        cin >> fes[i];
    }
    for (int i=0;i<4;i++)
    {
        for (int j=i+1;j<5;j++)
        {
            x=strcmp(fes[i],fes[j]);
            if (x>0)
            {
                swap(fes[i],fes[j]);
            }
        }
    }
    for (int i=0;i<5;i++)
    {
        cout << fes[i]<<"\t";
    }
    return 0;
}
