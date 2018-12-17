#include <iostream>

using namespace std;

int main()
{
    cout <<"task 1";
    cout << "\nHello World\n";


    cout <<"\n\n\ntask 2";
    cout << "\nName:\tArsalan Khattak" << "\nClass No:\t41";


    cout <<"\n\n\ntask 3";
    int num1;
    cout << "\nplz enter the number: ";
    cin >> num1;
    cout << "the number you entered is " << num1 << " right???";


    cout <<"\n\n\ntask 4";
    int num2=2;
    int num3=5;
    int num4=num2+num3;
    cout << "\nthe sum of two and five is " << num4;


    cout <<"\n\n\ntask 5";
    int num5;
    int num6;
    int num7;
    int num8;
    int num9;
    int num10;
    cout << "\nplease enter the first number: ";
    cin >> num5;
    cout << "\nplease enter second number: ";
    cin >> num6;
    num7=num5+num6;
    num8=num5-num6;
    num9=num5*num6;
    num10=num5/num6;
    cout <<  "adding first and second = " << num7 << "\nsubtracting second from first = "
         << num8 << "\nmultiplying first with second = " << num9 ;
    if (num6==0)
    {
        cout << "\nerror dividing by zero gives error";
    }
    cout << "\ndividing first by second = " << num10;


    cout <<"\n\n\ntask 6";
    int length;
    int width;
    int parameter;
    int area;
    cout << "\nplease input leanth of the rectangle: ";
    cin >> length;
    cout << "\nplease input width of rectangle: ";
    cin >> width;
    parameter=(2*width)+(2*length);
    area=width*length;
    cout << "\nparameter of rectangle is: " << parameter;
    cout << "\narea of rectangle is: " << area;


    cout <<"\n\n\ntask 7";
    int numb;
    int least;
    cout << "\nplease input the number: ";
    cin >> numb;
    least=numb%10;
    cout << "least number is: " << least;


    cout <<"\n\n\ntask 8";
    int seconds;
    int minutes;
    int hours;
    int seconds2;
    cout << "\nplease input the time in seconds: ";
    cin >> seconds;
    hours=seconds/3600;
    minutes=(seconds-(hours*3600))/60;
    seconds2=seconds-(minutes*60)-(hours*3600);
    cout << "time in Hours minutes and seconds is ";
    cout << "\nHours: " << hours ;
    cout << "\nminutes: " << minutes;
    cout << "\nseconds: " << seconds2;

    return 0;
}
