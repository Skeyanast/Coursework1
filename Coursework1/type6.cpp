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
		cout << "Уравнение не имеет действительных корней" << endl;
	}
	else if (D == 0) {
		double x = ((-1) * B - sqrt(D)) / (2 * A);
		cout << "Корень уравнения: " << x << endl;
	}
	else {
		double x1 = ((-1) * B - sqrt(D)) / (2 * A);
		double x2 = ((-1) * B + sqrt(D)) / (2 * A);
		cout << "Корни уравнения: " << endl
			<< "X1 = " << x1 << endl
			<< "X2 = " << x2 << endl;
	}
}

void type6::show()
{
	cout << "Уравнение: " << A << "*x^2 + " << B << "*x + " << C << " = 0" << endl;
}

void type6::Get_answer_podbor()
{
	double D = B * B - 4 * A * C;
	if (D < 0) {
		cout << "Уравнение не имеет действительных корней" << endl;
	}
	else {
		double min = abs(0 - A * (-20) * (-20) - B * (-20) - C);
		double x = -20;
		for (double i = -20; i < 20.01; i += 0.01) {
			double temp = abs(0 - A * i * i - B * i - C);
			if (temp < min) {
				min = temp;
				x = i;
			}
		}
		cout << "Приближенно, один из корней уравнения: " << x << endl;
	}
}

void type6::Get_answer_vieta()
{
	double a = A;
	double b = B;
	double c = C;
	if (abs(A) != 1) {
		a = A / abs(A);
		b = B / abs(A);
		c = C / abs(A);
	}
	double x1, x2;
	bool flag = false;
	for (x1 = -20; x1 < 20.01; x1 += 0.01) {
		for (x2 = -20; x2 < 20.01; x2 += 0.01) {
			if (abs(x1 + x2 + B / A) <= 0.0001 && abs(x1 * x2 - C / A) <= 0.0001) {
				if (x1 == x2) {
					cout << "По теореме Виета, корень уравнения: " << x1 << endl;
				}
				else {
					cout << "По теореме Виета, корни уравнения: " << endl
						<< "X1 = " << x1 << endl
						<< "X2 = " << x2 << endl;
				}
				flag = true;
			}
			if (flag) return;
		}
	}
	cout << "По теореме Виета, в диапазоне [-20; 20] корней уравнения нет" << endl;
}
