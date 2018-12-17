#include <iostream>

using namespace std;

int main()
{
    int seconds;
    int minutes;
    int hours;
    int seconds2;
    cout << "\n\n\nplease input the time in seconds: ";
    cin >> seconds;
    hours=seconds/3600;
    minutes=(seconds-(hours*3600))/60;
    seconds2=seconds-(minutes*60)-(hours*3600);
    cout << "time in Hours minutes and seconds is ";
    cout << "\nHours: " << hours ;
    cout << "   minutes: " << minutes;
    cout << "   seconds: " << seconds2;
    return 0;
}
