#include <iostream>

using namespace std;
void faboinic(int a,int b,int x)
{
    cout << " " <<a+b;
    x--;
    if(x>0)
    {
        faboinic(b,a+b,x);
    }
};
int main()
{
    int num1=0,num2=1,n=0;
    cout << "enter the number of terms (must be greater than 2): ";
    cin >> n;
    cout <<endl<< num1 << " " << num2;
    n=n-2;
    faboinic(num1,num2,n);
    return 0;
}
