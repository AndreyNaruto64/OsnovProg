// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


int a = 0;
void foo(); //rfc 3092
void bar();
void baz();


int main()
{
    std::cout << "Global a= " << a << std::endl;

    int a = 0;
    std::cout << "a = " << a << std::endl;
    std::cout << ":: a = " << ::a << std::endl;

    foo();
    bar();
    ::a = 7;
    std::cout << "One more time" << std::endl;
    bar();

    for (int i = 0; i < 10; ++i)
        baz();
}

void foo();
void bar();
void baz() {
    int cnt = 0;
    static int cnt2 = 0;
    ++cnt;
    ++cnt2;
    std::cout << "Counts: " << cnt << ", " << cnt2 << std::endl;



}
