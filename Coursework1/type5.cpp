#include <iostream>
#include "type5.h"

using namespace std;

type5::type5(double B, double C)
{
	this->B = B;
	this->C = C;
}

void type5::Get_answer()
{
	cout << "������ ���������: " << (-1) * (C / B) << endl;
}

void type5::show()
{
	cout << "���������: " << B << "*x + " << C << " = 0" << endl;
}

void type5::Get_answer_podbor()
{
	double min = abs(0 - B * (-20) - C);
	double x = -20;
	for (double i = -20; i < 20.01; i += 0.01) {
		double temp = abs(0 - B * (i) - C);
		if (temp < min) {
			min = temp;
			x = i;
		}
	}
	cout << "�����������, ���� �� ������ ���������: " << x << endl;
}
