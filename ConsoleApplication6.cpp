// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

template <typename T>
T _max(T a, T b) {
    return (a > b) ? a : b;


}

template <typename T>
T* _max(T* a, T* b) {
    return (*a > *b) ? a : b;


}

template<>
std::string _max(std::string a, std::string b) {
    return (a.size() > b.size()) ? a : b;


}


template <typename T1, typename T2>
void print(T1 a, T2 b) {
    std::cout << a << ", " << b << std::endl;


}

inline int _min(int a, int b) {
    return (a < b) ? a : b;
}
int main()
{
    std::cout << _max(3, 4) << std::endl;
    int x = 65, y = 28;

    std::cout << _max(x, y) << std::endl;
    std::cout << _max(3.14, 2.71) << std::endl;
    
    std::cout << *_max(&x, &y) << std::endl;
    std::cout << _max<double>(x, 2.71) << std::endl;
    
    std::cout << _min(x, y) << std::endl;
    int z = _min(x, y);
    z = _min(3, 4);

    
    
    
    print(2, 6.5);
}

