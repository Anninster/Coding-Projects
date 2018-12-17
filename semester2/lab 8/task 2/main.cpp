#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main()
{
    int x=0,y=1;
    char a[100];
    cin.getline(a,100);
    int g=strlen(a);
    cout <<endl << "your string is: ";
    for (int i=0;i<g;i++)
    {
        cout << a[i];
    }
    cout <<endl<<endl<<endl;
    for (int i=0;i<g;i++)
    {
        if(a[i]==' ')
            y++;
        if(a[i]!=' ' && a[i]!='\0')
            x++;
    }
    cout <<endl<< "the number of characters are: " << x << endl;
    cout << "number of words are: " << y<<endl<<endl<<endl;
    return 0;
}
