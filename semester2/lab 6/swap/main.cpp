#include <iostream>
using namespace std;
void Swap(int &num1,int &num2);
int main()
{
    int a,b;
    cout << "enter the value of a: ";
    cin >> a;
    cout << "enter the value of b: ";
    cin >> b;
    cout << "before function: "<< a<< "  :  "<< b <<endl;
    Swap(a,b);
    cout << "after function: "<< a<< "  :  " << b;
    return 0;
}
void Swap(int &num1,int &num2)
{
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
}
