#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name1 = "";
    string name2 = "";
    string roll = "";
    cout << "enter first name = ";
    cin >> name1;
    cout << "enter last name = ";
    cin >> name2;
    cout << "enter roll number = ";
    cin >> roll;
    cout << "Name: " << name1 << name2 <<"\n" << "Class No: " << roll;
    return 0;
}
