#include <iostream>
#include "type1.h"
#include "type2.h"
#include "type3.h"
#include "type4.h"
#include "type5.h"
#include "type6.h"
#include "type7.h"
#include "type8.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double A, B, C;
    const size_t len = 8;

    for (int i = 0; i < len; i++) {
        cout << "Введите коэффициенты " << i + 1 <<  "-го уравнения A, B и C через пробел: " << endl;
        cin >> A >> B >> C;
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
                    cout << endl;
                }
            }
        }
    }
     
    return 0;
}