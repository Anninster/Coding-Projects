#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
struct myvector
{
    float x;
    float y;
    float z;
};
float myvelocity(float a,float t);
float myaccelaration(float a,float t);
float myunitx(float x,float b);
float myunity(float y,float b);
float myunitz(float z,float b);
float mysmod(float a,float b,float c);
int main()
{
    float mymod,tim,vela;
    myvector num1;
    cout << "enter the time: ";
    cin >> tim;
    cout << "enter the values of vector respectivly:\nx: ";
    cin >> num1.x;
    cout << "y: ";
    cin >> num1.y;
    cout << "z: ";
    cin >> num1.z;

    mymod=mysmod(num1.x,num1.y,num1.z);
    vela=myvelocity(mymod,tim);
    cout << "the velocity of vector is: "<< vela;
    cout << "\nthe accelatration is: " << myaccelaration(vela,tim);
    cout << "\nthe unit vector is: " << myunitx(num1.x,mymod) << myunity(num1.y,mymod)<< " + " << myunitz(num1.z,mymod);
    return 0;
}
float myvelocity(float a,float t)
{
    float vela;
    vela=a/t;
    return vela;
}
float myaccelaration(float a,float t)
{
    float acca;
    acca=a/t;
    return acca;
}
float myunitx(float x,float b)
{
    float a;
    a=x/b;
    return a;
}
float myunity(float y,float b)
{
    float a;
    a=y/b;
    return a;
}
float myunitz(float z,float b)
{
    float a;
    a=z/b;
    return a;
}
float mysmod(float a,float b,float c)
{
    float x,y,z,resa;
    x=a*a;
    y=b*b;
    z=c*c;
    resa=sqrt(x+y+z);
    return resa;
}
