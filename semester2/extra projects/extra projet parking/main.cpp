#include <iostream>
#include <string>
#include <stdlib.h>

#include<time.h>
using namespace std;
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

int main()
{
    int l=1;
    lable:
    int x=rand()%10+1;
    int nslots=10;
    int rslots=nslots-x;
    string namew[10]={"ahmed","ali","asif","usman","arsalan","shehryar","harron","usama","sami","faizan"};
    /*for (int i=0;i<10;i++)
    {
        cin >> namew[i];
    }*/
    cout << "teachers that have arrived :"<<endl;
    for (int i=0;i<x;i++)
    {
        cout << namew[i]<<endl;
    }
    cout << "remaining slots: " << rslots<<endl;
    if(l<5)
    {
        delay(4000);
        l=l+1;
        cout<<endl<<endl<<endl;
        goto lable;
    }
    return 0;
}
