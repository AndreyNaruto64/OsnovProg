// ConsoleApplication10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void printArray(const int M[], int N, const char str[]="Array") {
    std::cout << str << ": ";
    for (int i = 0; i < N; ++i) {
        std::cout << M[i] << ' ';
        

    }
    std::cout << std::endl;
}

int* createArray(int n) {
    return n > 0 ? new int[n] : nullptr;
}

void randomArray(int A[], int n, int a = 10, int b = 100) {
    for (int i = 0; i < n; ++i) {
        A[i] = rand() % (b - a) + a;
    }
}

void reverseArray(int * A, int n) {
    for (int i = 0, j = n - 1; i < j; ++i, --j) {
        int tmp = A[i]; A[i] = A[j]; A[j] = tmp;
    }
    A = nullptr;
}

int& minelement(int A[], int n) {
    int imin = 0;
    for (int i = 1; i < n; ++i) {
        if (A[i] < A[imin]) {
            imin = i;
            return A[imin];
        }
    }
}

int maxelement(int A[], int n) {
    int imax = 0;
    for (int i = 1; i < n; ++i) {
        if (A[imax] < A[i]) {
            imax = i;
            return A[imax];
        }
    }
}

int main()
{
    int M[] = { 1,3,5,6,7,2,8,1,0,4,8,-1 };
    int N = sizeof(M) / sizeof(M[0]);
    printArray(M, N, "M");
    printArray(M + 3, N - 3);
    
    int n = 10;
    int* A;
    A = createArray(n);
    randomArray(A, n);
    printArray(A, n, "A");
    int* A = new int[n];
    

    randomArray(A, n, -10, 21);
    printArray(A, n, "A");
    reverseArray(A, n);
    printArray(A, n, "Reversed");

    reverseArray(A + 4, 3);
    delete[] A;

}


