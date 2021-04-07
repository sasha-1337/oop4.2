#pragma once
#include "Figure.h"
class Ellips : public Figure
{
private:
	double a, b;
	double pi = 3.14;
public:
	Ellips() { SetA(0); SetB(0); }
	Ellips(double A, double B)
	{
		if (A > B) 
		{ 
			SetA(A); 
			SetB(B); 
		}
		else
			if (A < B)
			{
				SetA(B);
				SetB(A);
			}
			else
			{
				SetA(A);
				SetB(B);
			}
	}

	double GetPi() { return pi; }
	double GetA() { return a; }
	double GetB() { return b; }

	void SetA(double a) { this->a = a; }
	void SetB(double b) { this->b = b; }

	virtual double P()
	{
		return 4 * (((GetPi() * a * b) + pow(a - b, 2)) / (a + b));
	}
	virtual double S()
	{
		return GetPi() * a * b;
	}
	virtual void Print()
	{
		cout << "--- Еліпс ---" << endl;
		cout << " Периметр (похибка 0.63%) - " << P() << endl;
		cout << " Площа - " << S() << endl << endl;
	}
};