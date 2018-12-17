#include <iostream>

using namespace std;

int main()
{
    int row;
    cout << "enter odd positive number: ";
    cin >> row;
    while (row%2==0 || row<=0)
    {
        cout << "please enter an odd integer: ";
        cin >> row;
    }
    for (int i=1;i<=row;i=i+2)
    {
        for (int a=1;a<=i/2;a++)
        {
            cout << " ";
        }
        for (int b=row;b>=i;b--)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
