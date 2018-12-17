#include <iostream>
using namespace std;
int main()
{
    int a[10],c=0,d=0,e=0,f,g;
    for (int i=0;i<10;i++)
    {
        cout << "enter value for the " << i+1 << "th element: ";
        cin >> a[i];
    }
    f=a[0];
    g=a[0];
    for (int i=0;i<10;i++)
    {
        if (a[i]==5)
            c++;
        if (a[i]<5)
            d++;
        if (a[i]>5)
            e++;
        if (a[i]<f)
            f=a[i];
        if (a[i]>g)
            g=a[i];
    }
    cout << "\n\n5 repeated: " << c << endl;
    cout << "numbers less than 5: "<< d << endl;
    cout << "numbers greater than 5: "<< e<<endl;
    cout << "greatest number: " << g<< endl;
    cout << "smallest number: "<< f<< endl;
    return 0;
}
