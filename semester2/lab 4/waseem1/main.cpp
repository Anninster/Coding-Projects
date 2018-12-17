#include <iostream>

using namespace std;

int main()
{int num,base,x,y;
    cout << "enter the number" << endl;
    cin>>num;
    cout<<"enter the base"<<endl;
    cin>>base;
    do
    {
        x=num%base;
        y=num/base;
        cout<<x;
        num=y;
    }while(num!=0);
    return 0;
}
