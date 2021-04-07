#pragma once
#include "Figure.h"
class Rectangl : public Figure
{
private:
	double a, b;
public:
	Rectangl() { SetA(0); SetB(0); }
	Rectangl(double A, double B)
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
	double GetA() { return a; }
	double GetB() { return b; }

	void SetA(double a) { this->a = a; }
	void SetB(double b) { this->b = b; }

	virtual double P()
	{
		return (2*a + 2*b);
	}
	virtual double S()
	{
		return a*b;
	}
	virtual void Print()
	{
		cout << "--- Прямокутник ---" << endl;
		cout << " Периметр - " << P() << endl;
		cout << " Площа - " << S() << endl << endl;
	}
};