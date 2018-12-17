#include <iostream>

using namespace std;
void same(int a)
{
    cout << "table of "<< a << " :"<<endl;
    for (int i=1;i<=10;i++)
    {
        cout << a<<" x " << i << " = " << a*i<<endl;
    }

};
int main()
{
    int a[5];
    for (int i=0;i<5;i++)
    {
        cout << "enter the number you want the table to display: "<<endl;
        cin >> a[i];
        same(a[i]);
    }
    cout <<endl<<endl<<"all the number of whom the tables are calculated are: ";
    for (int i=0;i<5;i++)
    {
        cout <<a[i]<<", ";
    }
    return 0;
}

