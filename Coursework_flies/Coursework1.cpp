#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    bool execution = true;

    do {
    system("cls");
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
        system("cls");
        equation_types();
        break;
    case 2:
        system("cls");
        calculator();
        break;
    case 3:
        cout << "Работа программы завершена." << endl;
        execution = false;
        break;
    }
    

    } while (execution);
    

    system("pause");
    return 0;
}