#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    int a, b, c;
    float average, sum = 0.0;
    cout << "enter first number =";
    cin >> a;
    cout << "enter second number =";
    cin >> b;
    sum = a + b;
    average = sum / 2;
    cout << "average = " << average;
    cout << '\a';
    cout << '\n';
    cout << "press any key to close ";
    getch();

    return 0;
}
