#include <iostream>

using namespace std;
int fact(int a)
{
    if(a<2)
        return 1;
    else
        return a*fact(a-1);
};
int main()
{
    int num;
    cout << "enter the number: ";
    cin >> num;
    cout << fact(num);
    return 0;
}
