#include <iostream>
#include <conio.h>

using namespace std;

int main()
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
    case '/':
        cout << n1 / n2;
        break;
    default:
        cout << "error";
        break;
    }
     cout << "\n"; 
    cout << "prees any key to close ";
    getch();
    return 1;
}