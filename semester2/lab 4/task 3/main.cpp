#include <iostream>

using namespace std;

int main()
{
    for (int i=2;i<=12;i=i+2)
    {

        for (int a=12;a>=i;a--)
        {
            cout << " ";
        }
        for (int b=1;b<=i/2;b++)
        {
            cout << " " <<i/2;
        }
        cout << "\n";
    }
    return 0;
}
