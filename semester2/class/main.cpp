#include <iostream>
#include <string>
using namespace std;

int main()
{
    lable:
    int x;
    cout << "what type of calculation do you want\n 1=arethmetic\t2=boolion\t3=string\n";
    cin >> x;

    if (x==1)
    {
        double a;
        double b;
        double c;
        double f;
        int d;
        cout << "enter num1 = ";
        cin >> a;
        cout << "\nenter (num2 =0)num2 = ";
        cin >> b;
        cout << "\nenter third number =  ";
        cin >> f;
        cout << "\nwhat do you want to do" << "\n+=1 -=2 *=3 /=4\n";
        cin >> d;
        if (d==1)
            {
                c=a+b+f;
            }
        if (d==2)
            {
                c=a-b;
            }
        if (d==3)
            {
                c=a*b;
            }
        if (d==4)
            {
                c=a/b;
            }
        cout << "result = " << c;
    }
    if (x==2)
    {
     int y;
     bool a ;
     bool b ;
     cout << "value of a = ";
     cin >> a;
     cout << "value of b = ";
     cin >> b;
     bool c = a&&b;
     bool d = a||b;
     bool f = a^b;


     cout << "what type of operation do you want\n1=AND\t2=OR\t3=NOT\t4=XOR :  ";
     cin >> y;
     if (y==1)
        {
            cout << "a AND b = " << c;

        }
     if (y==2)
        {
            cout << "a OR b = " << d;

        }
     if (y==3)
        {
            int l;
            cout << "which variable do you want this opperation to operate on : \n" << "1=a         2=b\n";
            cin >> l;
            if (l==1)
                {
                    cout << "NOT of a = " << !a;

                }
            if (l==2)
                {
                    cout << "NOT of b = " << !b;

                }

        }
     if (y==4)
        {
            cout << "XOR of a and b is : " << f;

        }
    }
string ques;
cout << "\ndo you want to run it again??\ny=yes\t";
cin >> ques;
if (ques== "y" )
{
    goto lable;
}
    return 0;
}
