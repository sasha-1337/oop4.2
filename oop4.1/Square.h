#pragma once
#include "Figure.h"
class Square : public Figure
{
private:
	double a;
public:
	Square() { SetA(0); }
	Square(double A) { SetA(A); }

	double GetA() { return a; }
	void SetA(double a) { this->a = a; }

	virtual double P()
	{
		return (4 * a);
	}
	virtual double S()
	{
		return pow(a, 2);
	}
	virtual void Print()
	{
		cout << "--- Квадрат ---" << endl;
		cout << " Периметр - " << P() << endl;
		cout << " Площа - " << S() << endl << endl;
	}
};