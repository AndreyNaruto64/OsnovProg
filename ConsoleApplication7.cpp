// ConsoleApplication7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

inline long long factorial(int n) {
    return (n<2)? 1:n * factorial(n - 1);

}

inline long long factorialWR(int n) {
    long long result = 1;
    while (n > 1) {
        result *= n;
        --n;
    }
    return result;

}

long long fibonachi(long long n) {
    return (n < 3) ? 1 : fibonachi(n - 1) + fibonachi(n - 2);
}

int main()
{
    std::cout << factorial(5) << std::endl;
    std::cout << factorial(10) << std::endl;
}



