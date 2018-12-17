#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;

int main()
{

    FILE *data;
    data=fopen("data.txt","w");
    ofstream out("data.txt");
    char ch[]={"my Name is Arsalan Khattak"};
    for (int i=0;ch[i]!='\0';i++)
    {
        out << ch[i];
    }
    fclose(data);
    data=fopen("data.txt","r");
    char test;
    test=fgetc(data);
    while (test!=EOF)
    {
        cout << test;
        test=fgetc(data);
    }
    fclose(data);
    return 0;
}
