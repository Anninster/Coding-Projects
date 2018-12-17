#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
class classroom
{
public:
    char name[50];
    char gaurdianname[50];
    int age;
    char section;
    int batch;
    int rollnumber;
    void inputdata(int a)
    {
      cout << "enter name: ";
      cin.ignore();
      cin.getline(name,50);
      cout << "enter guardian name: ";
      cin.ignore();
      cin.getline(gaurdianname,50);
      cout << "enter age: ";
      cin.ignore();
      cin >> age;
      cout << "enter batch: ";
      cin >> batch;
      cout << "enter section: ";
      cin >> section;
      rollnumber = a+1;
    };
};
int main()
{
    cout << "class registration system please input the desired data correctly:"<<endl;
    int nosd;
    int siza=sizeof(classroom);
    cout << "enter the number of students: ";
    cin >> nosd;
    classroom *students=(classroom *)malloc(nosd*siza);
    cout << "enter data for the students properly according to their roll number"<<endl;
    for(int i=0;i<nosd;i++)
    {
        cout << "Roll # " << i+1<< ":" <<endl;
        students[i].inputdata(i);
        cout <<endl<<endl;
    }

    return 0;
}
