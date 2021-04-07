#include "Circle.h"
#include "Ellipse.h"
#include "Square.h"
#include "Rectangle.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Circle a(3);
	a.Print();
	
	Ellips b(2,4);
	b.Print();

	Square c(3);
	c.Print();

	Rectangl d(3, 7);
	d.Print();

	Figure* x = new Circle();
	Figure* y = new Ellips();
	Figure* z = new Square();
	Figure* q = new Rectangl();

	cout << endl << typeid(x).name() << endl;
	cout << typeid(*x).name() << endl;
	cout << typeid(y).name() << endl;
	cout << typeid(*y).name() << endl;
	cout << typeid(z).name() << endl;
	cout << typeid(*z).name() << endl;
	cout << typeid(q).name() << endl;
	cout << typeid(*q).name() << endl;

	delete x; delete y; delete z; delete q;

	Figure* arr[4];
	arr[0] = &a;
	arr[1] = &b;
	arr[2] = &c;
	arr[3] = &d;

	cout << endl << "--- Коло ---" << endl;
	cout << " Периметр - " << arr[0]->P() << endl;
	cout << " Площа - " << arr[0]->S() << endl;

	cout << endl << "--- Еліпс ---" << endl;
	cout << " Периметр - " << arr[1]->P() << endl;
	cout << " Площа -  " << arr[1]->S() << endl;

	cout << endl << "--- Квадрат ---" << endl;
	cout << " Периметр - " << arr[2]->P() << endl;
	cout << " Площа - " << arr[2]->S() << endl;

	cout << endl << "--- Прямокутник ---" << endl;
	cout << " Периметр - " << arr[3]->P() << endl;
	cout << " Площа - " << arr[3]->S() << endl;

	return 0;
}