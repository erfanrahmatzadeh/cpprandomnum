#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>

using namespace std;
// std :: oct ;

int main()
{

    double a, p, r;
    int n;
    cin >> p >> r >> n;
    for (int i = 1; i <= n; i++)
    {
        a = p * pow(1.0 + r, i);
        cout <<a << endl;
       /* cout << setw(4) << i << setiosflags(ios::fixed || ios::showpoint)
             << setw(10) << setprecision(2) << a << endl; */
    }

    getch();
    return 0;
}