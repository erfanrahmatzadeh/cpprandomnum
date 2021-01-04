#include <iostream>
#include <conio.h>

using namespace std;

void a(void);
void b(void);
void c(void);
int x = 1; // global variable
int main()
{
    int x = 5; // local variable
    cout << x << endl;
    {
        int x = 7;
        cout << x << endl;
    }
    cout << x << endl;
    a();
    b();
    c();
    a();
    b();
    c();
    cout << x << endl;

    getch();

    return 0;
}
// ----------------------
void a(void)
{
    int x = 25;
    cout << x << endl;
    ++x;
    cout << x << endl;
}
// -----------------------
void b(void)
{
    static int x = 50;
    cout << x << endl;
    ++x;
    cout << x << endl;
}
// -----------------------
void c(void)
{
    cout << x << endl;
    x *= 10;
    cout << x << endl;
}