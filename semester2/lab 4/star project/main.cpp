#include <iostream>

using namespace std;

int main()
{
    int width,rows,witdh2;
    cout << "enter the width of rectangle: ";
    cin >> width;
    cout << "enter number of rows: ";
    cin >> rows;
    witdh2=width-1;
    for (int i=1;i<=rows;i++)
    {
        if (i%2==1)
        {
            for (int a=1;a<=width;a++)
            {
                cout << "* ";
            }
        }
        if (i%2==0)
        {
            for (int a=1;a<=witdh2;a++)
            {
                cout << " *";
            }
        }
        cout << "\n";
    }
    return 0;
}
