#include <iostream>
#include <stdlib.h>
using namespace std;
int word(char arr[],char b)
{
    int words=1;
    for (int i=0;arr[i]!='\0';i=i+1)
    {
        if(arr[i]==b)
            words++;
    }
    return words;
};
int wordsize(char arr[],int *lw,char b)
{
    int lefw=*lw,i;
    for (i=lefw;arr[i]!=b && arr[i]!='\0';i++);
    int siza=i-lefw;
    *lw=i;
    return siza;
};
int main()
{
    char ans;
    char tok=' ';
    int words,siza,lw=-1;
    char a[100];
    cout << "enter the string: "<<endl;
    cin.getline(a,100);
    cout <<endl<< "you want to enter a token other than a space: (y=yes)";
    cin >> ans;
    if(ans=='y')
    {
        cout <<endl<< "enter the token (must be a single char): ";
        cin >> tok;
    }
    words=word(a,tok);
    char **pt;
    pt=(char **)malloc(words*sizeof(char *));
    siza=wordsize(a,&lw,tok);
    pt[0]=(char *)malloc(siza);
    pt[0]=a;
    pt[0][siza-1]='\0';
    for (int i=1;i<words;)
    {
        for (int j=1;j<100;j++)
        {
            if(a[j]==tok)
            {
                lw=j;
                a[j]='\0';
                siza=wordsize(a,&lw,tok);
                pt[i]=(char *)malloc(siza);
                pt[i]=&a[j+1];
                i++;
            }
        }

    }
    cout << endl<<endl;
    for (int i=0;i<words;i++)
    {
        cout << pt[i]<<endl;
    }
    delete pt;
    return 0;
}
