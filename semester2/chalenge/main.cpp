#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 0;
    string name = "";
    char name2 = 'a';
    cout << "enter your name: ";
    cin >> name;
    cout << "enter letter";
    cin >> name2;


    cout << "\n enter num1 = ";
    cin >> num1;
    cout << "\n enter num2 = ";
    cin >> num2;
    cout << "this is easy, " << name << name2 ;

    cout << "\nnum1 + num2 = " << num1+num2 ;
    return 0;
}
