#include <iostream>

using namespace std;
long baseval(long num,long base);
int main()
{
    lable:
    char namew,numa;
    long num,base,num2=0,num1;
    cout << "enter decimal number: ";
    cin >> num;
    cout << "enter the base it is to be converted: ";
    cin >> base;
    if (base>9 || base<2)
    {
        cout << "enter base between 2 and 9: ";
        cin >> base;
    }
    /*if (base==2 && num>=1024)
    {
        cout << "please choose another base or enter a number smaller than 1024: ";
        cout << "what you want to choose: base 'b' number 'n'\n\t\t\t\t";
        cin >> numa;
        if(numa=='n')
        {
            cout << "enter new number: ";
            cin >> num;
        }
        else
        {
            cout << "enter new base value: ";
            cin >> base;
        }
    }*/
    num1=num;
    num2=baseval(num,base);
    cout << num1 << " in " << base << " base is: " << num2 << "\n";
    cout << "want to run again: enter y for yes n for no\n\t\t\t\t";
    cin >> namew;
    if (namew!='y' && namew!='n')
    {
        cout << "please input y or n\n\t\t\t";
        cin >> namew;
    }
    else if (namew=='y')
    {
        goto lable;
    }
    return 0;
}
long baseval(long num,long base)
{
    long num2=0,b;
    for(int a=1;num>0;a=a*10)
    {

        b=num%base;
        b=b*a;
        num2=num2+b;
        num=num/base;
    }
    return num2;
}
