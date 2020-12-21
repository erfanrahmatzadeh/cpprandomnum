#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    int g, h = -1;
    cout << "grade =";
    while (cin >> g)
    {
        if (g > h)
            h = g;
        cout << "grade =";
    }
    cout << "\n max =" << h;

    getch();
    return 0;
}