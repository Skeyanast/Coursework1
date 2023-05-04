#include <iostream>
#include "type2.h"

using namespace std;

type2::type2(double A)
{
	this->A = A;
}

void type2::Get_answer()
{
	cout << "Ответом является X = 0" << endl;
}

void type2::show()
{
	cout << "Уравнение: " << A << "*x^2 = 0" << endl;
}
