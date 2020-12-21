#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{

    int t, gc, g;
    float a;
    t = 0;
    gc = 0;

    cout << "grade=";
    cin >> g;
    while (g != -1)
    {
        t = t + g;
        gc = gc + 1;
        cout << "grade";
        cin >> g;
    }
    if (gc != 0)
    {
        a = static_cast<float>(t) / gc;
        cout << setprecision(2)
             << setiosflags(ios::fixed)
             << a << endl;
    }
    else
    {
        cout << "no grade" << endl;
    }

    getch();
    return 0;
}