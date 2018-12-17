#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numg,chea;
    cout << "enter the number of students: ";
    cin >> numg;
    int a[numg];
    string b[numg];
    for (int i=1;i<=numg;i++)
    {
        cout << "enter the name and reg # respectively:" << endl;
        cin >> b[i];
        cin >> a[i];
    }
    cout <<endl << endl;
    cout << "to check the name of a student enter the reg #: ";
    cin >> chea;
    for (int i=1;i<=numg;i++)
    {
        if (a[i]==chea)
        {
            cout << b[i]<<endl;
        }
    }
    return 0;
}
