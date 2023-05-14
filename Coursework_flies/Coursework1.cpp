#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    bool execution = true;

    do {
    menu();

    int way;
    cin >> way;

    if (cin.fail()) {
        cin.clear();
        ignore_line();
    }
    else {
        ignore_line();
    }

    switch (way) {
    case 1:
        equation_types();
        break;
    case 2:
        calculator();
        break;
    case 3:
        exit_prog(execution);
        break;
    }

    } while (execution);
    
    system("pause");
    return 0;
}