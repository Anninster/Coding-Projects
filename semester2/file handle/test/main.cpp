#include <iostream>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
using namespace std;
void showdata();
void studentfind();
void enternew();
struct student
{
    int reg;
    char name[10];
    float cgpa;
    int semester;
};
int x;
FILE *data;
int main()
{
    cout << "number of student to enter: ";
    cin >> x;
    student fle;
    data=fopen("dataofstudents.txt","w");
    fopen("dataofstudents.txt","w");
    ofstream out("dataofstudents.txt");
    for (int i=0;i<x;i++)
    {
        cout << "enter the data below of " << i+1 << "th student :";
        cout << endl <<"reg #: ";
        cin >> fle.reg;
        cout << endl << "name : ";
        cin.ignore();
        cin.getline(fle.name,10);
        cout <<endl<<"semseter : ";
        cin >> fle.semester;
        cout <<endl<<"cgpa: ";
        cin >> fle.cgpa;
        if(i>0)
        {
            out << endl;
        }
        out << fle.reg << "\t";
        out << fle.name << "\t";
        out << fle.semester << "\t";
        out << fle.cgpa ;
    }
    fclose(data);
    char ye;
    lable:
    cout << endl<<endl<<"what do you want to do: \(store a student id = s :: delete a student id = d :: )";
    cout << "(find student id = f :: view all data =v)";
    cin >> ye;
    if (ye=='s')
    {
        enternew();
    }
    else if (ye=='f')
    {
        studentfind();
    }
    else if (ye=='v')
    {
        showdata();
    }
    char ads;
    cout << endl<<endl<<"do you want to run again: (y=yes)";
    cin >> ads;
    if(ads=='y')
        goto lable;
    return 0;
}
void showdata()
{
    ofstream out("dataofstudents.txt");
    char ch;
    data=fopen("dataofstudents.txt","r");
    ch=fgetc(data);
    while (ch!=EOF)
    {
        cout << ch;
        ch=fgetc(data);
    }
    fclose(data);
}
void studentfind()
{
    ofstream out("dataofstudents.txt");
    char rega[10];
    cout << "enter the registration number: ";
    cin.ignore();
    cin.getline(rega,10);
    char ch;
    data=fopen("dataofstudents.txt","r");
    int i=0;
    ch=fgetc(data);
    while (ch!=EOF)
    {
        if(ch==rega[i])
        {
            i++;
            ch=fgetc(data);
            if(rega[i]=='\0')
                break;
        }
        ch=fgetc(data);
    }
    while (ch!='\n')
    {
        cout << ch;
        ch=fgetc(data);
    }
    fclose(data);
}
void enternew()
{
    ofstream out("dataofstudents.txt");
    int j;
    cout << "enter the number of student you want to enter: ";
    cin >> j;
    student fle;
    for (int i=0;i<j;i++)
    {
        cout << "enter the data below of " << i+1 << "th student :";
        cout << endl <<"reg #: ";
        cin >> fle.reg;
        cout << endl << "name : ";
        cin.ignore();
        cin.getline(fle.name,10);
        cout <<endl<<"semseter : ";
        cin >> fle.semester;
        cout <<endl<<"cgpa: ";
        cin >> fle.cgpa;
        if(i>0)
        {
            out << endl;
        }
        out << fle.reg << "\t";
        out << fle.name << "\t";
        out << fle.semester << "\t";
        out << fle.cgpa ;
    }
}
