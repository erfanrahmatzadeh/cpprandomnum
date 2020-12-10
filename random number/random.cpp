#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand((unsigned)time(0));
    int randomNumber = rand();
    cout << "random number between 1 amd 300 =" << endl;
    for (int i = 0; i < 5; i++)
        randomNumber = (rand() % 300) + 1;
    cout << randomNumber << endl;
    cout << '\n';
    cout << "press any key to close ";
    getch();

    return 0;
}
//