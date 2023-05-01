#include <iostream>
#include "type3.h"

using namespace std;

type3::type3(double C)
{
	this->C = C;
}

void type3::Get_answer()
{
	cout << "Корней нет" << endl;
}

void type3::show()
{
	cout << C << " = 0" << endl;
}
