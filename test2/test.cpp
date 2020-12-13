#include <iostream>
#include <conio.h>
#include <limits>
using namespace std;
 
int main()
{
    int a, b;
    // int [a == 150];
    cout << "enter your age : ";
    cin >> a;

    if (a >= 18)
    {
        cout << "you are adult " << endl;
        cout << "you can use this app " << endl;
        cout << "wellcome" << endl;
        if (a == 18)
        {
            cout << "you are lucky " << endl;
        }
    }
    else
    {
        cout << "you can't use this app " << endl;
        cout << "your under the age " << endl;
        cout << "sorry" << endl;
        if (a >= 14)
        {
            cout << " you are teenager" << endl;
        }
        else
        {
            cout << "you are child " << endl;
        }

        if (a <= 0)
        {
            cout << "something's wrong" << endl;
        }
    }

    getch();
    return 0;
}