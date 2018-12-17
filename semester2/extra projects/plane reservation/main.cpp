#include <iostream>
#include <string>
#include <stdlib.h>
#include <string.h>
using namespace std;
void reservation();
void cancelation();
void edit();
void showdata();
struct ida
{
    int id;
    string name;
    string origin;
    string dest;
    char typea;
    char plane;
    bool myclass;
    int cost;
    int code;
};
int sump=0,ramap=0,sume=0,ramae=0;
ida a[40];
int main()
{

    int u,e;
    char b,saat,pl;
    for (int i=0;i<40;i++)
    {
        a[i].id=75;
    }
    for (int i=0;i<2;i++)
        {
            cout << "enter your plane of choice( p=pk-125 :: e=ek-255 ): ";
            cin >> pl;
            cout << "which type of seat do you want: (business=b, economy=e)";
            cin >> saat;
            if (pl=='p')
            {
                if(saat=='b')
                {
                    u=0;
                    e=4;
                    sump++;
                }
                else
                {
                    u=4;
                    e=10;
                    ramap++;
                }
            }
            else
            {
                if(saat=='b')
                {
                    u=10;
                    e=20;
                    sume++;
                }
                else
                {
                    u=20;
                    e=35;
                    ramae++;
                }
            }
            int h;
            cout << "enter your seat number (b/t " << u+1<<"-"<<e<<"): ";
            cin >> h;
            seat:
            if(a[h-1].id!=75)
            {
                cout << "enter another seat number this has been taken: ";
                cin >> h;
                goto seat;
            }
            a[h-1].id=h;
            cout << "enter your name: "<<endl;
            cin>> a[h-1].name;
            cout << "enter your destination:(DXB=Dubai, ADU=abudhabi) "<<endl;
            cin>>a[h-1].dest;
            a[h-1].typea=saat;
            a[h-1].plane=pl;
            a[h-1].origin="isl";
            a[h-1].code=rand()%1000+1;
            a[h-1].cost=0;
            if(a[h-1].typea=='b')
                a[h-1].myclass=1;
            else
                a[h-1].myclass=0;
            if(a[h-1].plane=='p')
                a[h-1].cost+=500;
            else
                a[h-1].cost+=1500;
            if(a[h-1].dest=="DXB" || a[h-1].dest=="dxb")
                a[h-1].cost+=500;
            if (a[h-1].dest=="ADU" || a[h-1].dest=="adu")
                a[h-1].cost+=400;
            if (a[h-1].myclass==1)
                a[h-1].cost+=1000;
            if (a[h-1].myclass==0)
                a[h-1].cost+=500;
            if(a[h-1].plane=='p')
                a[h-1].cost+=500;
            if(a[h-1].plane=='e')
                a[h-1].cost+=900;

                cout <<endl<< "your id is: "<< a[h-1].id<<"\nyour code is: "<<a[h-1].code;
            cout <<endl<<"----------------------------------"<<endl<<endl<<"----------------------------------"<<endl;
        }


    cout <<endl;

    cout <<endl<<endl<< "welcome to the reservation network what do you want to do??:";
    lable:
    cout <<endl<< "to do a reservation enter r:\nto cancel a reservation enter c:\nto edit reservation enter e:\nto show data about all reservations s:\n";
    cin >> b;
    if(b=='r')
        reservation();
    if(b=='c')
        cancelation();
    if(b=='e')
        edit();
    if(b=='s')
        showdata();
    char q;
    cout <<endl<<"you want to do anything else: (y=yes n=no)";
    cin >> q;
    if (q=='y')
        goto lable;
    return 0;
}
void reservation()
{
    int u,e;
    char sat,pl;
    cout << "enter your plane of choice( p=pk-125 :: e=ek-255 ): ";
    cin >> pl;
    cout << "which type of seat do you want: (business=b, economy=e)";
    cin >> sat;
    if(pl=='p')
    {
        if(sat=='b')
        {
            u=0;
            e=4;
            sump++;
        }
        else
        {
            u=4;
            e=10;
            ramap++;
        }
    }
    else
    {
        if(sat=='b')
        {
            u=10;
            e=20;
            sume++;
        }
        else
        {
            u=20;
            e=35;
            ramae++;
        }
    }
    int p;
    cout<< "enter the seat number: (between "<<u+1<<" and "<<e<<" )"<<endl;
    cin >> p;
    while (a[p-1].id!=75)
    {
        cout <<"that seat is taken plz choose another: ";
        cin >> p;
    }
    cout << "plz enter the data correctly: "<<endl;
    cout << "enter your name: "<<endl;
    cin>>a[p-1].name;
    cout << "enter your destination:(DXB=Dubai, ADU=abudhabi) "<<endl;
    cin>>a[p-1].dest;
    a[p-1].plane=pl;
    a[p-1].typea=sat;
    a[p-1].id=p;
    a[p-1].cost=0;
    a[p-1].origin="isl";
    a[p-1].code=rand()%1000+1;
    if(a[p-1].typea=='b')
        a[p-1].myclass=1;
    else
        a[p-1].myclass=0;
    if(a[p-1].plane=='p')
        a[p-1].cost+=500;
    else
        a[p-1].cost+=1500;
    if(a[p-1].dest=="DXB" || a[p-1].dest=="dxb")
        a[p-1].cost+=500;
    if (a[p-1].dest=="ADU" || a[p-1].dest=="adu")
        a[p-1].cost+=400;
    if (a[p-1].myclass==1)
        a[p-1].cost+=1000;
    if (a[p-1].myclass==0)
        a[p-1].cost+=500;
    cout <<endl<< "your id is: "<< a[p-1].id<<"\nyour code is: "<<a[p-1].code;
}
void cancelation()
{
    int p,v;
    char g;
    cout << "enter your id: ";
    cin >> p;
    cout << "are you sure you want to cancel your reservation: ";
    cin >> g;
    if(g=='y')
    {
        code:
        cout << "plz enter your code: ";
        cin >> v;
        if (a[p-1].code==v)
        {
            a[p-1].id=75;
            cout << a[p-1].id;
        }
        else
        {
            char w;
            cout << "your code is wrong do you want to enter it again? (y=yes n=no): ";
            cin >> w;
            if(w=='y')
                goto code;
        }
    }
}
void edit()
{
    int p;
    char j;
    cout << "enter your id number: ";
    idaa:
    cin >> p;
    if(a[p-1].id==75)
    {
        cout << "this seat is not reserved enter your id again: ";
        goto idaa;
    }
    cout << "what do you want to edit: (name=n,destination=d)";
    cin >> j;
    if(j=='n')
    {
        cout << "enter your new name: ";
        cin>>a[p-1].name;
    }
    if(j=='d')
    {
        cout << "enter your new destination: ";
        cin>>a[p-1].dest;
    }

    a[p-1].cost=0;
    if(a[p-1].typea=='b')
        a[p-1].myclass=1;
    else
        a[p-1].myclass=0;
    if(a[p-1].dest=="DXB" || a[p-1].dest=="dxb")
        a[p-1].cost+=500;
    if (a[p-1].dest=="ADU" || a[p-1].dest=="adu")
        a[p-1].cost+=400;
    if (a[p-1].myclass==1)
        a[p-1].cost+=1000;
    if (a[p-1].myclass==0)
        a[p-1].cost+=500;
    if(a[p-1].plane=='p')
        a[p-1].cost+=500;
    if(a[p-1].plane=='e')
        a[p-1].cost+=900;
    if(a[p-1].plane=='p')
        a[p-1].cost+=500;
    else
        a[p-1].cost+=1500;
}
void showdata()
{
    char pl;
    cout << "for which you want the data to show: ( p=pk-125 :: e=ek-255 )";
    cin >> pl;
    if(pl=='p')
    {
        cout <<endl<<"id\t\t"<< "name\t\t"<< "dest\t"<< "class\t\t" << "cost"<<endl;
        cout <<endl<<"-------------------------------------------------------------------"<<endl;
        for (int i=0;i<10;i++)
        {
            if(a[i].id!=75)
            {
                cout << a[i].id<<"\t\t"<< a[i].name<<"\t\t"<<a[i].dest<<"\t"<<a[i].typea<<"\t"<<a[i].cost<<endl;
            }
        }
        cout<<endl<<"the remaining business class seats are: " << 4-sump <<endl<<"the remaining economic class seats are: "<<6-ramap<<endl;
    }
    else
    {
        cout <<endl<<"id\t\t"<< "name\t\t"<< "dest\t"<< "class\t\t" << "cost"<<endl;
        cout <<endl<<"-------------------------------------------------------------------"<<endl;
        for (int i=10;i<40;i++)
        {
            if(a[i].id!=75)
            {
                cout << a[i].id<<"\t\t"<< a[i].name<<"\t\t"<<a[i].dest<<"\t"<<a[i].typea<<"\t"<<a[i].cost<<endl;
            }
        }
        cout<<endl<<"the remaining business class seats are: " << 10-sume <<endl<<"the remaining economic class seats are: "<<15-ramae<<endl;
    }
}
