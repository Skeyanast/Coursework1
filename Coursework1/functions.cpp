#include <iostream>
#include "functions.h"

using namespace std;

void check_input()
{
    if (cin.fail()) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "������� �� �������� �������� ������������, �������������� ��� = 0!" << endl;
    }
}