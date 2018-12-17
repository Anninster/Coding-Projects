#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "task 1\n";
    int num,i=1;
    cout << "enter the number you want the table of: ";
    cin >> num;
    while (i<=10)
        {
           cout << "\n " << num << " x " << i << " = " << num*i;
           i++;
        }
    cout << "\n\n\ntask 2";
    int num1=0,a=0;
    while (a<20)
        {
            num1=num1+a;
            a++;
        }
    cout << "\nsum of first 20 integers is: " << num1;
    cout << "\n\n\ntask 3";
    int num2,num3,result=0;
    cout << "\nenter base: ";
    cin >> num2;
    cout << "enter power: ";
    cin >> num3;
    result=pow(num2,num3);
    cout << num2 << " power " << num3 << " = " << result ;

    cout << "\n\n\n\n";
    return 0;
}
