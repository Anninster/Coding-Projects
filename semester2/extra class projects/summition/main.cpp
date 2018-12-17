#include <iostream>

using namespace std;
float mypower(float a,float b);
float myfact(float b);
float summi(float a,float b);
int main()
{
    float number,limit,x,y,z=0;
    cout<< "enter base: ";
    cin >> number;
    cout << "enter limit: ";
    cin >> limit;
    for (int i=0;i<=limit;i++)
    {
        x=mypower(number,i);
        y=myfact(i);
        z=z+summi(x,y);
    }
    cout << "the summition is: "<< z;
    return 0;
}
float mypower(float a,float b)
{
    float powe=1;
    for (int i=1;i<=b;i++)
    {
        powe=powe*a
    }
    return powe;
}
float myfact(float b)
{
    if (b==1)
    {
        return 1;
    }
    return b*myfact(b-1);
}
float summi
