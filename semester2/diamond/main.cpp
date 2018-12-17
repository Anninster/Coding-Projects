#include <iostream>

using namespace std;

int main()
{
    for (int i=1;i<=6;i++)
        {
            for (int a=1;a<=5;a++)
                {
                    if (i==1 || i==6)
                        {
                            if (a==3)
                                {
                                    cout << "*";
                                }
                            else
                                {
                                    cout << " ";
                                }
                        }
                    if (i==2 || i==5)
                        {
                            if (a==2 || a==3 || a==4)
                                {
                                    cout << "*";
                                }
                            else
                                {
                                    cout << " ";
                                }
                        }
                    if (i==3 || i==4)
                        {
                            cout << "*";
                        }
                }
            cout << "\n";
        }
    return 0;
}
