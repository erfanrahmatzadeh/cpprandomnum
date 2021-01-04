#include <iostream>
#include <conio.h>

using namespace std;

int square(int);

int main()
{
    for (int x = 1; x <= 100; x++)
        cout << square(x) << " ";
    cout << endl;


      getch();

    return 0;
}
int square(int y)
{
    return y * y;
}