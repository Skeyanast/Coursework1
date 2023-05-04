#include <iostream>
#include "type8.h"

using namespace std;

type8::type8(double A, double B)
{
	this->A = A;
	this->B = B;
}

void type8::Get_answer()
{
	double x = ((-1) * B) / A;
	cout << "Корни уравнения: " << endl
		<< "X1 = 0" << endl
		<< "X2 = " << x << endl;
}

void type8::show()
{
	cout << "Уравнение: " << A << "*x^2 + " << B << "*x = 0" << endl;
}

void type8::Get_answer_podbor()
{
	double min = abs(0 - A * (-20) * (-20) - B * (-20));
	double x = -20;
	for (double i = -20; i < 20.01; i += 0.01) {
		if (i != 0) {
			double temp = abs(0 - A * i * i - B * (i));
			if (temp < min) {
				min = temp;
				x = i;
			}
		}
	}
	cout << "Приближенно, один из корней уравнения: " << x << endl;
}
