#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int base;
    int perp;
    float hype;
    cout << "\nenter base: ";
    cin >> base;
    cout << "\nenter perpendicular: ";
    cin >> perp;
    hype=sqrt(base*base + perp*perp);
    cout << "\nhypothenuse: " << hype;
    return 0;
}
