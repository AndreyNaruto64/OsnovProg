// ConsoleApplication9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdarg.h>

int summa(int N , int x, ...) {
	va_list args;
	va_start(args, x);
	int total = x;
	

	while (--N) {
		total += va_arg(args, int);
	}
	va_end(args);
	
	return total;
}

double prod(double x, ...) {
	va_list args;
	va_start(args, x);
	double a = x;
	double total = a;
	while ((a = va_arg(args, double)) != 0.) {
		total *= a;
	}
	va_end(args);
	return total;
}

int main()
{
	int a = 1, b = 2, c = 3, d = 4, e = 5;

	
	std::cout << summa(2, a, b) << std::endl;
	std::cout << summa(3, a, b, c) << std::endl;
	std::cout << summa(4, a, b, c, d) << std::endl;
	std::cout << summa(5, a, b, c, d, e) << std::endl;

	double f = 1.5, g = 5.6, h = 1.2, s = 1.9;
	std::cout << prod(f, g, 0.0) << std::endl;
	std::cout << prod(f, g, h, 0.0) << std::endl;
	std::cout << prod(f, g, h, s, 0.0) << std::endl;
	
	//printf(" x=%d, %s = %f", 10, "y = ", 5.46);
	
	/*void printf(const char*);
	void printf(const char*, int);
	void printf(const char*, double);
	void printf(const char*, const char*);
	void printf(const char*, char);
	...
	*/



}


