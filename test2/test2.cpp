#include <iostream>
#include <conio.h>

using namespace std;

int mane()
{

    int n1, n2;
    char op;
    cout << "Type num,op,num=\n";
    cin >> n1 >> op >> n2;
    switch (op)
    {
    case '+':
        cout << n1 + n2;
        break;
    case '-':
        cout << n1 - n2;
        break;
    case '*':
        cout << n1 * n2;
        break;
    default:
        cout << "error";
        break;
    }
    getch();
    return 0;
}