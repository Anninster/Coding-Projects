#include <iostream>

using namespace std;
//int swap1(int a,int b);
//int swap2(int a,int b);
int main()
{
    int a,b;
    cout << "enter value of first: ";
    cin >> a;
    cout << "enter value of second: ";
    cin >> b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout << "first number was: " << a << " ?? ";
    cout << "\nand second number was: " << b << " ?? \nright?";
    return 0;
}
/*int swap1(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    return a;
}*/

/*int swap2(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    return b;
}*/

