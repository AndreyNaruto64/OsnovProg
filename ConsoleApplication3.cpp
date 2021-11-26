// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int mpow(int, int);
double mpow(double, int);
void printHello();

int main()
{


    printHello();
    int x = 3, y = 4;

    int mpow(int a, int n);
    double mpow(double, int);
    int mpow(int, int);
    int result = mpow(x, y);

    std::cout << x << " ^ " << y << " = " << result << std::endl;
    std::cout << "2^25 = " << mpow(2, 25) << std::endl;
    std::cout << "2.1^" << y << " = " << mpow(2.1, y) << std::endl;
    return 0;

}

double mpow(double a, double x) {
    return exp(x * logs(fab a));
  
}





int mpow(int a, int n) {

    /*Return a^n*/




    int result = 1;
    if (n > 0)
        for (int i = 0; i < n; ++i)
            result *= a;
    else
        for (int i = 0; i < n; ++i)
            result /= a;
            return result;
}

double mpow(double a, int n) {

    /*Return a^n*/




    int result = 1;
    if (n > 0)
        for (int i = 0; i < n; ++i)
            result *= a;
    else
        for (int i = 0; i < n; ++i)
            result /= a;
    return result;
}
void printHello() {
    std::cout << "Hello World" << std::endl;
}







