#pragma once
#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

class Figure
{
public:
	virtual double P() = 0;
	virtual double S() = 0;
	virtual void Print() = 0;
};