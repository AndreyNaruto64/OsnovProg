// ConsoleApplication12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main(int argc, char* argv[], char * env[])
{
    std::cout << "argc = " << argc << std::endl;

    for (int i = 0; i < argc; ++i) {
        std::cout << "i = " << i << ":" << argv[i] << std::endl;
    }

    int j = 0;
    char* username = nullptr;
    while (env[j] != nullptr) {
        //std::cout << "i = " << j << ":" << env[j] << std::endl;
        if (strstr(env[j], "USERNAME = ") != nullptr) {
            username = strstr(env[j], "=") + 1;
           // break;
        }
        ++j;
            
            
    
    
    }
    if (username);
    std::cout << "Hello" << username << std::endl;
}

