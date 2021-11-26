// ConsoleApplication8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void han(int n, int from=1, int to=3, int tmp=2) {
    if (n > 1)  {
        han(n - 1, from, tmp, to);
        han(1, from, to, tmp);
        han(n - 1, tmp, to, from);

    }
    else {
        std::cout << from << " -> " << to << std::endl;
    }


}


int main()
{
    han(4);
    han(3, 100, 200, 300);
}

/*

void foo(int a, int b, int c=1, int d=2){

std::cout<< a << b << c << d << std::endl;

}

foo(5,6,7,8); //5678
foo(5,6,7); //5672
foo(5,6); //5612
foo(5); //error compilation 

void bar (int a=1, int b=2, int c); // error compilation 
void bar (int a=1, int b, int c=3); // error compilation




*/
