#include <iostream>
#include "functions.h"
#include "type1.h"
#include "type2.h"
#include "type3.h"
#include "type4.h"
#include "type5.h"
#include "type6.h"
#include "type7.h"
#include "type8.h"


using namespace std;


void ignore_line()
{
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void initializer(double A, double B, double C)
{
    if (A == 0) {
        if (B == 0) {
            if (C == 0) {
                type1 eq;
                eq.show();
                eq.Get_answer();
                cout << endl;
            }
            else {
                type3 eq(C);
                eq.show();
                eq.Get_answer();
                cout << endl;
            }
        }
        else {
            if (C == 0) {
                type7 eq(B);
                eq.show();
                eq.Get_answer();
                cout << endl;
            }
            else {
                type5 eq(B, C);
                eq.show();
                eq.Get_answer();
                eq.Get_answer_podbor();
                cout << endl;
            }
        }
    }
    else {
        if (B == 0) {
            if (C == 0) {
                type2 eq(A);
                eq.show();
                eq.Get_answer();
                cout << endl;
            }
            else {
                type4 eq(A, C);
                eq.show();
                eq.Get_answer();
                eq.Get_answer_podbor();
                cout << endl;
            }
        }
        else {
            if (C == 0) {
                type8 eq(A, B);
                eq.show();
                eq.Get_answer();
                eq.Get_answer_podbor();
                cout << endl;
            }
            else {
                type6 eq(A, B, C);
                eq.show();
                eq.Get_answer();
                eq.Get_answer_podbor();
                eq.Get_answer_vieta();
                cout << endl;
            }
        }
    }
}

void menu()
{
    system("cls");
    cout << "\t\tМЕНЮ" << endl
        << "-----------------------------------" << endl
        << "1. Типы квадратных уравнений" << endl
        << "2. Калькулятор квадратных уравнений" << endl
        << "3. Выход из программы" << endl
        << "-----------------------------------" << endl << endl;
    cout << "Выберете пункт меню: ";
}

void equation_types()
{
    system("cls");
    cout << "1. ТИПЫ КВАДРАТНЫХ УРАВНЕНИЙ" << endl << endl
        << "Квадратное уравнение - это алгебраическое уравнение второй степени, общий вид которого: Ax^2 + Bx + C = 0." << endl << endl
        << "В зависимости от значений, которые могут принимать коэффициенты квадратного уравнения, можно выделить восемь типов квадратных уравнений:" << endl
        << "1. 0 = 0." << endl
        << "2. Ax^2 = 0." << endl
        << "3. C = 0." << endl
        << "4. Ax^2 + C = 0." << endl
        << "5. Bx + C = 0." << endl
        << "6. Ax^2 + Bx + C = 0." << endl
        << "7. Bx = 0." << endl
        << "8. Ax^2 + Bx = 0." << endl << endl
        << "Данная программа работает со всеми вышеперечисленными типами квадратных уравнений." << endl << endl;
    system("pause");
}

void calculator()
{
    system("cls");
    cout << "2. КАЛЬКУЛЯТОР КВАДРАТНЫХ УРАВНЕНИЙ" << endl << endl
        << "Правила использования калькулятора:" << endl
        << "1. Ввод коэффициентов осуществляется через клавишу Enter." << endl
        << "2. В случае некорректного ввода коэффициент считывается = 0, вводите аккуратно!" << endl << endl;

    bool flag = true;
    unsigned int number = 0;

    do
    {
        double A, B, C;
        number++;
        cout << "(" << number << ") " << "Введите коэффициенты уравнения A, B и C через Enter: " << endl;
        cin >> A;
        if (cin.fail()) {
            cin.clear();
            ignore_line();
            cout << "Введено не числовое значение коэффициента, считываем его = 0!" << endl;
        }
        else ignore_line();
        
        cin >> B;
        if (cin.fail()) {
            cin.clear();
            ignore_line();
            cout << "Введено не числовое значение коэффициента, считываем его = 0!" << endl;
        }
        else ignore_line();
        
        cin >> C;
        if (cin.fail()) {
            cin.clear();
            ignore_line();
            cout << "Введено не числовое значение коэффициента, считываем его = 0!" << endl;
        }
        else ignore_line();

        initializer(A, B, C);

        cout << "Если вы хотите найти корни еще одного уравнения, введите 1." << endl
            << "Для перехода к меню введите любое другое значение." << endl;
        int temp;
        cin >> temp;
        if (cin.fail()) {
            cin.clear();
            ignore_line();
        }
        else {
            ignore_line();
        }
        if (temp != 1) flag = false;
        else cout << endl;

    } while (flag);
}

void exit_prog(bool& execution)
{
    cout << endl << "Работа программы завершена." << endl << endl;
    execution = false;
}