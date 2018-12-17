#include <iostream>

using namespace std;

int main()
{
    int num,i=1;
    cout << "enter the number you want the table of: ";
    cin >> num;
    while (i<=10)
        {
           cout << "\n " << num << " x " << i << " = " << num*i;
           i++;
        }
    return 0;
}
