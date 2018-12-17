#include <iostream>

using namespace std;

int main()
{
    int dim;
    cout << "enter dim: ";
    cin >> dim;

    for (int i=1;i<=dim;i++)
    {
        for (int a=dim;a>=i;a--)
        {
            cout << " ";
        }
        for (int b=1;b<=i;b++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    for (int i=dim-1;i>=1;i--)
    {
        for (int a=i;a>=i;a--)
        {
            cout << " ";
        }

        for (int b=i;b>=1;b--)
        {
            cout << " *";
        }
        cout << "\n";
    }
    return 0;
}
