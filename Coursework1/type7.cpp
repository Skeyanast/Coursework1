#include <iostream>
#include "type7.h"

using namespace std;

type7::type7(double B)
{
	this->B = B;
}

void type7::Get_answer()
{
	cout << "������ ���������: x = 0" << endl;
}

void type7::show()
{
	cout << "��������� " << B << "*x = 0" << endl;
}
