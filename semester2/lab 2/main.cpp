#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    cout << "task 1";
    float pound;
    cout << "\nenter mass in pounds: ";
    cin >> pound;
    double kilo=(pound/2.2);
    cout << "\nmass in kg is: " << kilo ;


    cout << "\n\n\ntask 2";
    int base;
    int perp;
    float hype;
    cout << "\nenter base: ";
    cin >> base;
    cout << "\nenter perpendicular: ";
    cin >> perp;
    hype=sqrt(base*base + perp*perp);
    cout << "\nhypothenuse: " << hype;



    cout <<"\n\n\n\ntask 3";
    string GP1;
    string GP2;
    string GP3;
    string GP4;
    float gr1;
    float gr2;
    float gr3;
    float gr4;
    int hr1;
    int hr2;
    int hr3;
    int hr4;
    double GPA;
    cout << "\nenter the gpa of first subject: ";
    cin >> GP1;
    cout << "\nenter the credit hours of first subject: ";
    cin >> hr1;
    cout << "\nenter the gpa of second subject: ";
    cin >> GP2;
    cout << "\nenter the credit hours of second subject: ";
    cin >> hr2;
    cout << "\nenter the gpa of third subject: ";
    cin >> GP3;
    cout << "\nenter the credit hours of third subject: ";
    cin >> hr3;
    cout << "\nenter the gpa of forth subject: ";
    cin >> GP4;
    cout << "\nenter the credit hours of forth subject: ";
    cin >> hr4;
    //gr1
    if (GP1=="A"||GP1=="a")
        {
            gr1=4;
        }
    if (GP1=="A-"||GP1=="a-")
        {
            gr1=3.67;
        }
    if (GP1=="B+"||GP1=="b+")
        {
            gr1=3.33;
        }
    if (GP1=="B"||GP1=="b")
        {
            gr1=3;
        }
    if (GP1=="B-"||GP1=="b-")
        {
            gr1=2.67;
        }
    if (GP1=="C+"||GP1=="c+")
        {
            gr1=2.33;
        }
    if (GP1=="C"||GP1=="c")
        {
            gr1=2;
        }
    if (GP1=="C-"||GP1=="c-")
        {
            gr1=1.67;
        }
    if (GP1=="D+"||GP1=="d+")
        {
            gr1=1.33;
        }
    if (GP1=="D"||GP1=="d")
        {
            gr1=1;
        }
    if (GP1=="F"||GP1=="f")
        {
            gr1=0;
        }
    //gr2
    if (GP2=="A"||GP2=="a")
        {
            gr2=4;
        }
    if (GP2=="A-"||GP2=="a-")
        {
            gr2=3.67;
        }
    if (GP2=="B+"||GP2=="b+")
        {
            gr2=3.33;
        }
    if (GP2=="B"||GP2=="b")
        {
            gr2=3;
        }
    if (GP2=="B-"||GP2=="b-")
        {
            gr2=2.67;
        }
    if (GP2=="C+"||GP2=="c+")
        {
            gr2=2.33;
        }
    if (GP2=="C"||GP2=="c")
        {
            gr2=2;
        }
    if (GP2=="C-"||GP2=="c-")
        {
            gr2=1.67;
        }
    if (GP2=="D+"||GP2=="d+")
        {
            gr2=1.33;
        }
    if (GP2=="D"||GP2=="d")
        {
            gr2=1;
        }
    if (GP2=="F"||GP2=="f")
        {
            gr2=0;
        }
    //gr3
    if (GP3=="A"||GP3=="a")
        {
            gr3=4;
        }
    if (GP3=="A-"||GP3=="a-")
        {
            gr3=3.67;
        }
    if (GP3=="B+"||GP3=="b+")
        {
            gr3=3.33;
        }
    if (GP3=="B"||GP3=="b")
        {
            gr3=3;
        }
    if (GP3=="B-"||GP3=="b-")
        {
            gr3=2.67;
        }
    if (GP3=="C+"||GP3=="c+")
        {
            gr3=2.33;
        }
    if (GP3=="C"||GP3=="c")
        {
            gr3=2;
        }
    if (GP3=="C-"||GP3=="c-")
        {
            gr3=1.67;
        }
    if (GP3=="D+"||GP3=="d+")
        {
            gr3=1.33;
        }
    if (GP3=="D"||GP3=="d")
        {
            gr3=1;
        }
    if (GP3=="F"||GP3=="f")
        {
            gr3=0;
        }
    //gr4
    if (GP4=="A"||GP4=="a")
        {
            gr4=4;
        }
    if (GP4=="A-"||GP4=="a-")
        {
            gr4=3.67;
        }
    if (GP4=="B+"||GP4=="b+")
        {
            gr4=3.33;
        }
    if (GP4=="B"||GP4=="b")
        {
            gr4=3;
        }
    if (GP4=="B-"||GP4=="b-")
        {
            gr4=2.67;
        }
    if (GP4=="C+"||GP4=="c+")
        {
            gr4=2.33;
        }
    if (GP4=="C"||GP4=="c")
        {
            gr4=2;
        }
    if (GP4=="C-"||GP4=="c-")
        {
            gr4=1.67;
        }
    if (GP4=="D+"||GP4=="d+")
        {
            gr4=1.33;
        }
    if (GP4=="D"||GP4=="d")
        {
            gr4=1;
        }
    if (GP4=="F"||GP4=="f")
        {
            gr4=0;
        }
    GPA=(gr1*hr1+gr2*hr2+gr3*hr3+gr4*hr4)/(hr1+hr2+hr3+hr4);
    cout << "\nYour GPA is: " << GPA ;
    return 0;
}
