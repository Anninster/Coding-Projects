#include <iostream>
#include <string>

using namespace std;

int main()
{
    string GP1;
    float gr1;
    int hr=0, hr1,n,i=1;
    double GPA=0 , GPA2;
    cout << "how many gpa do you want to enter: ";
    cin >> n;
    while (i<=n)
    {
        cout << "\nenter the gpa of subject: ";
        cin >> GP1;
        cout << "\nenter the credit hours of subject: ";
        cin >> hr1;
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
        GPA=GPA+(gr1*hr1);
        hr=hr+hr1;
        i++;
    }
    GPA2=GPA/hr;
    cout << "\nYour GPA is: " << GPA2 ;
    return 0;
}
