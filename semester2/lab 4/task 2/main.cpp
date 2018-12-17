#include <iostream>

using namespace std;

int main()
{
    int w1=4,w2=4,l1=5,l2=5;
    cout << "enter length for upper rectangle: ";
    cin >> l1;
    cout << "enter length for second rectangle: ";
    cin >> l2;
    cout << "enter height for triangles (must be equal): ";
    cin >> w1;
    w2=w1;
    if (l1>l2)
    {
        for (int i=1;i<=w1+w2;i++)
        {
            if (i%2==1)
            {
                for (int b=1;b<=l1;b++)
                {
                    cout << "* ";
                }
            }
            else
            {
                for (int c=1;c<=l2;c++)
                {
                    cout << " *";
                }
            }
            cout << "\n";
        }
    }
    if (l1<l2)
    {
        for (int i=1;i<=w1+w2;i++)
        {
            if (i%2==1)
            {
                for (int b=1;b<=l1;b++)
                {
                    cout << " *";
                }
            }
            else
            {
                for (int c=1;c<=l2;c++)
                {
                    cout << "* ";
                }
            }
            cout << "\n";
        }
    }
    if (l1==l2)
    {
        for (int i=1;i<=w1+w2;i++)
        {
            if (i%2==1)
            {
                for (int b=1;b<=l1;b++)
                {
                    cout << "*";
                }
            }
            else
            {
                for (int c=1;c<=l2;c++)
                {
                    cout << "*";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
