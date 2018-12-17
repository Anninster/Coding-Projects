#include <iostream>

using namespace std;
int fact_adf(int a);
int main()
{
    int num;
    cout << "enter number: ";
    cin >> num;
    cout << fact_adf(num) << endl;
    return 0;
}
int fact_adf(int a)
{
    if (a==1)
    {
        return 1;
    }

    return a*fact_adf(a-1);
}
