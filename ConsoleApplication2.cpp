// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	/*int* p = new int; //выделение памяти 
	*p = 123;
	std::cout << " *p = " << *p << std::endl;
	std::cout << "  p = " << p << std::endl;

	delete p; //delete; // удаление памяти

	p = new int;
	*p = 456;
	std::cout << " *p = " << *p << std::endl;
	std::cout << " p = " << p << std::endl;
	delete p;

	int n;
	do {
		std::cout << "Input positive n= ";
		std::cin >> n;
	} while (n < 1);

	int* M = new int[10];
	std::cout << " M = " << M << std::endl;
	for (int i = 0; i < n; ++i) {
		M[i] = 2 * i + 1;
	}

	for (int i = n - 1; i >= 0; --i) {
		std::cout << M[i] << ' ';

	}
	std::cout << std::endl;
	
	delete[] M;
*/	

	/*int n, m;
	do {
		std::cout << "Number of rows: " ;
		std::cin >> n;


	} while (n < 1);

	do {
		std::cout << "Number of colums: ";
		std::cin >> m;


	} while (m < 1);
	int** M = new int* [n];
	for (int i = 0; i < n; ++i) {
		M[i] = new int[m];
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			M[i][j] = rand() % 100 - 50;

		}
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			std::cout << M[i][j] << '\t';


		}
		std::cout << std::endl;
	}

	for (int i = 0; i < n; ++i) {
		delete[] M[i];
	}

	

	delete[] M;

	*/


	int** A, ** B, ** C;




}