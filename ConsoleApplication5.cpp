// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void foo(int a, int b) {
    std::cout << "before a = " << a << ", b = " << b << std::endl;
    int tmp = a;
    a = b;
    b = tmp;
    std::cout << "after a = " << a << ", b = " << b << std::endl;


}

void bar(int* pa, int* pb) {
    std::cout << "before *pa = " << *pa << ", *pb = " << *pb << std::endl;
    int tmp = *pa; *pa = *pb; *pb = tmp;
    std::cout << "after *pa = " << *pa << ", *pb = " << *pb << std::endl;
}

void baz(int& a, int& b) {
    std::cout << "before a = " << a << ", b = " << b << std::endl;
    int tmp = a; a = b; b = tmp;
    std::cout << "after a = " << a << ", b = " << b << std::endl;
}


template <typename T>

void my_swap(T& a, T& b) {
    T tmp = a; a = b; b = tmp;
}



int main()
{
    int x = 1, y = 2;

    std::cout << "before x= " << x << ", y = " << y << std::endl;
    foo(x, y); // void foo(int a=x, int b=y) ...
    std::cout << "after x = " << x << ", y = " << y << std::endl;
    std::cout << "------------------bar----------------------" << std::endl;
    std::cout << "before x = " << x << ", y = " << y << std::endl;
    bar(&x, &y);
    std::cout << "after x = " << x << ", y = " << y << std::endl;

    std::cout << "------------------baz----------------------" << std::endl;
    x = 1; y = 2;

    std::cout << "before x = " << x << ", y = " << y << std::endl;
    baz(x, y); // void baz(int &a=x, int &b=y) ... 
    std::cout << "after x = " << x << ", y = " << y << std::endl;
    
    double f = 1.0, g = 2.0;
    my_swap(f, g); 
    std::cout << "after f = " << f << ", g = " << g << std::endl;
}
