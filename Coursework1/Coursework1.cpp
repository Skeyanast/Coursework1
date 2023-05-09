#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double A, B, C;
    const size_t len = 8;

    for (int i = 0; i < len; i++) {
        cout << "Введите коэффициенты " << i + 1 <<  "-го уравнения A, B и C через enter: " << endl;
        cin >> A;
        check_input();
        cin >> B;
        check_input();
        cin >> C;
        check_input();

        initializer(A, B, C);
    }
    
    system("pause");
    return 0;
}