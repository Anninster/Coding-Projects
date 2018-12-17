#include <iostream>

using namespace std;

int moves=0;
void Hanoi(int n, char a, char b, char c)
{
    moves++;
    if(n == 1)
    {
        cout << "Move disc " << n << " from " << a << " to " << c << endl;
    }
    else
    {
        Hanoi(n-1, a,c,b);
        cout << "Move disc " << n << " from " << a << " to " << c << endl;
        Hanoi(n-1,b,a,c);
    }
}

int main(){

  int d;
  cout << "Enter the number of discs: " << endl;
  cin >> d;
  Hanoi(d, 'A', 'B', 'C');
  cout << "It took " << moves << " moves. " << endl;

  return 0;
}
