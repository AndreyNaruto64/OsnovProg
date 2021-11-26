// ConsoleApplication11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
typedef double (*Pfun)(double);
double integral(Pfun f, double a, double b, int N = 1000) {
	if (b < a)
		std::swap(a, b);
	double dx = (b - a) / N;
	double S = 0.0, xn = a;
	while (xn < b) {
		S += f(xn + dx / 2.0) * dx;
		xn += dx;
	}
	return S;
}

double myfun(double x) { return x * x - 3.0 * x + 2.; }

int menu() {
	int key;
	do {
		std::cout << "1. sin" << std::endl;
		std::cout << "2. cos" << std::endl;
		std::cout << "3. x^2-3x+2" << std::endl;
		std::cin >> key;

	} while (key < 1 || key>3);
	return key;
}
int main()
{

	Pfun f;
	f = sin;

	std::cout << "f(1) = " << integral(myfun, 0., 1.)<<std::endl;
	std::cout << "(*f)(1) = " << integral(sin, 0., 1.)<< std::endl;
	std::cout << f << std::endl;
	
	f = myfun;

	std::cout << "f(1) = " << integral(myfun, 0., 1.) << std::endl;
	std::cout << "(*f)(1) = " << integral(sin, 0., 1.) << std::endl;
	std::cout << f << std::endl;
	
	Pfun FuncArray[] = { sin, cos, myfun };
	int key = menu() - 1;
	double S = integral(FuncArray[key], 0., 1.);
	std::cout << "f(1) = " << integral(myfun, 0., 1.) << std::endl;
	std::cout << "(*f)(1) = " << integral(sin, 0., 1.) << std::endl;
	std::cout << "Integral from 0 to 1 = " << S << std::endl;
	
	
	
	return 0;
}

