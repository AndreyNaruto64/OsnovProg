// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    double x = 23456789234.5;

    std::cout << "       x=" << x << std::endl;
    std::cout << "sizeof(x) = " << sizeof(x) << std::endl;

    double* px; // указатель на double адрес бумажки
    px = &x;
    std::cout << "       px = 0x" << px << std::endl;
    std::cout << "sizeof(px)= " << sizeof(px) << std::endl;
    std::cout << "      *px =" << *px << std::endl;

    double y = 4.56;
    px = &y;
    std::cout << "       px = 0x" << px << std::endl;
    std::cout << "      *px = " << *px << std::endl;

    double** pp; // адрес адреса бумажки
    pp = &px;
    std::cout << "       pp = 0x" << pp << std::endl;
    std::cout << "sizeof(pp)= " << sizeof(pp) << std::endl;
    std::cout << "      *pp =" << *pp << std::endl;
    std::cout << "     **pp =" << **pp << std::endl;

    **pp = 1.0;
    std::cout << "       y = " << y << std::endl;

    *px = 2.0;
    std::cout << "       y = " << y << std::endl;

    int* p;
    p = (int*)&x;

    std::cout << "       &x = 0x " << &x << std::endl;
    std::cout << "       p = 0x" << p << std::endl;
    std::cout << "      *p = " << *p << std::endl;

    unsigned char* c = (unsigned char*)&x;
    std::cout << "       c = " << (int)*c << std::endl;
    ++c;
    std::cout << "       c = " << (int)*c << std::endl;
    ++c;
    std::cout << "       c = " << (int)*c << std::endl;
    ++c;
    std::cout << "       c = " << (int)*c << std::endl;
    ++c;
    std::cout << "       c = " << (int)*c << std::endl;
    ++c;
    std::cout << "       c = " << (int)*c << std::endl;
    ++c;
    std::cout << "       c = " << (int)*c << std::endl;
    ++c;
    std::cout << "       c = " << (int)*c << std::endl;

    int M[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    p = &(M[0]);

   
    std::cout << "       p = 0x " << p << std::endl;
    std::cout << "      *p =  " << *p << std::endl;
    std::cout << "      *p =  " << *(p + 1) << std::endl;
    std::cout << "       p = 0x " << *(p + 2) << std::endl;
    std::cout << "      *p =  " << *(p + 3) << std::endl;
    std::cout << "      *p =  " << *(p + 4) << std::endl;

    /*
    M[i]  *(M+i)
    ++p; // можно
    ++M; // нельзя
    Перешагивание черз элементы, не через байты
    
    
    
    
    
    
    */

    return 0;
}

