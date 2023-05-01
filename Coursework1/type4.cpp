#include <iostream>
#include <cmath>
#include "type4.h"

using namespace std;

type4::type4(double A, double C)
{
	this->A = A;
	this->C = C;
}

void type4::Get_answer()
{
	double k = ((-1) * C) / A;
	if (k >= 0) {
		double x1 = sqrt(k);
		double x2 = sqrt(k) * (-1);
		cout << "����� ���������: " << endl
			<< "X1 = " << x1 << endl
			<< "X2 = " << x2 << endl;
	}
	else {
		cout << "������ ���" << endl;
	}
}

void type4::show()
{
	cout << "��������� " << A << "*x^2 + " << C << " = 0" << endl;
}

void type4::Get_answer_podbor()
{
	if ((((-1) * C) / A) < 0) {
		cout << "������ ������� ������� ���" << endl;
	}
	else {
		double min = abs(0 - A * (-20) * (-20) - C);
		double x = -20;
		for (double i = -20; i < 20.01; i += 0.01) {
			double temp = abs(0 - A * (i) * (i) - C);
			if (temp < min) {
				min = temp;
				x = i;
			}
		}
		cout << "�����������, ���� �� ������ ���������: " << x << endl;
	}
}
