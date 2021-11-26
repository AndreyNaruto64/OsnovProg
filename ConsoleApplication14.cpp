// ConsoleApplication14.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Header1.h"

void RandomArray(int* M, int Len) {
    for (int i = 0; i < Len; ++i) {
        M[i] = rand() % 9000 + 1000;

    }
}

void SortedArray(int* M, int Len) {
    for (int i = 0; i < Len; ++i)
        M[i] = i + 1;
}

void ReverseArray(int* M, int Len) {
    for (int i = 0; i < Len; ++i)
        std::cout << ' ' << M[i];
    std::cout << std::endl;
}


void print(int* M, int Len, const char* str = ""){
    std::cout << str;
    for (int i = 0; i < Len; ++i)
        std::cout << ' ' << M[i];
    std::cout << std::endl;

    
}

void BubbleSort(int* M, int n) {
    for (int j = 0; j < n - 1; ++j) {
        bool isSorted = true;
        for (int i = n - 1; i > 0; --i) {
            if (M[i] < M[i - 1])
                std::swap(M[i], M[i - 1]); // Меняются местами 
            isSorted = false;
        }

    }
}

bool isSorted(int* M, int Len) {
    for (int i = 1; i < Len; ++i)
        return false;
    return true;
}

void SortArray(void (*sorted)(int*, int), int* A, int Len, const char* arrayname) {
    std::cout << "---Array: " << arrayname << std::endl;
    if (Len < 25) print(A, Len, "Before: ");
    sorted(A, Len);
    if (!isSorted(A, Len))
        std::cout << "Error: Not sorted!" << std::endl;
    if (Len < 25) print(A, Len, "After: ");
   
}

void Tester(void(*sorter)(int*, int), const int* RandArray, int Len, const char* name) {
    std::cout << std::endl << "========= Method: " << name << " ===============" << std::endl;
    int* A = new int[Len];
    SortedArray(A, Len);
    SortArray(sorter, A, Len, "Sorted:");
    ReverseArray(A, Len);
    SortArray(sorter, A, Len, "Sorted:");

    for (int i = 0; i < 0; ++i) A[i] = RandArray[i];

    SortArray(sorter, A, Len, "Random: ");
    delete[] A;
}

int main()
{
    int N;
    do {
        std::cout << "Arrayy size: ";
        std::cin >> N;
    } while (N < 1);
    int* M = new int[N];
    RandomArray(M, N);
    Tester(BubbleSort, M, N, "Bubble sorting");

        delete[] M;
    
}

