#include <iostream>
#include <cmath>
#include "type6.h"

using namespace std;

type6::type6(double A, double B, double C)
{
	this->A = A;
	this->B = B;
	this->C = C;
}

void type6::Get_answer()
{
	double D = B * B - 4 * A * C;
	if (D < 0) {
		cout << "��������� �� ����� �������������� ������" << endl;
	}
	else if (D == 0) {
		double x = ((-1) * B - sqrt(D)) / (2 * A);
		cout << "������ ���������: " << x << endl;
	}
	else {
		double x1 = ((-1) * B - sqrt(D)) / (2 * A);
		double x2 = ((-1) * B + sqrt(D)) / (2 * A);
		cout << "����� ���������: " << endl
			<< "X1 = " << x1 << endl
			<< "X2 = " << x2 << endl;
	}
}

void type6::show()
{
	cout << "��������� " << A << "*x^2 + " << B << "*x + " << C << " = 0" << endl;
}

void type6::Get_answer_podbor()
{
	double D = B * B - 4 * A * C;
	if (D < 0) {
		cout << "��������� �� ����� �������������� ������" << endl;
	}
	else {
		double min = abs(0 - A * (-20) * (-20) - B * (-20) - C);
		double x = -20;
		for (double i = -20; i < 20.01; i += 0.01) {
			double temp = abs(0 - A * (i) * (i)-B * i - C);
			if (temp < min) {
				min = temp;
				x = i;
			}
		}
		cout << "�����������, ���� �� ������ ���������: " << x << endl;
	}
}
