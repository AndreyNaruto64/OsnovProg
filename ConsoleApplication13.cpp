// ConsoleApplication13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
void reverse(char str[]) {
    int len = 0;
    while (str[len] != '\0') ++len;
    if (len > 0) {
        for (int i = 0, j = len - 1; i < j; ++i, --j) {
            std::swap(str[i], str[j]);
        }
    }
}

void upperLOWER(char str[]) {
    char* ch = &str[0];
    while (*ch != '\0') {
        if (*ch >= 'a' && *ch <= 'z') {
            *ch = 'A' + ((*ch) - 'a');
            
        
        }
        else if (*ch >= 'A' && *ch <= 'Z') {
            *ch = 'a' + ((*ch) - 'A');
        }
        ++ch;
    }



}

int main() {
    char str1[] = "Hello World";
    std::cout << "Before: " << str1 << std::endl;
    reverse(str1);
    std::cout << "After: " << str1 << std::endl;

    char str[1024];
    //std::cin >> str;
    std::cin.getline(str, 1024);
    std::cout << "Readed: " << std::cin.gcount() << " symbols"<< std::endl;
    std::cout << "String: " << str << std::endl;
    std::cout << "Lenght: " << strlen(str) << std::endl;
    std::cout << "sizeof: " << sizeof(str) << std::endl;

    upperLOWER(str);
    std::cout << "sTRING: " << str << std::endl;

   /* std::cin >> str;
    std::cout << "String" << str << std::endl;
    */
}


/*int main()
{
    char str1[] = "Hello world";
    char str2[] = { 'H','e','l','l','o',' ','w','o','r','l','d' };

    int len1 = sizeof(str1);
    int len2 = sizeof(str2);

    std::cout << "sizeof of str1 = " << len1 << std::endl;
    std::cout << "sizeof of str2 = " << len2 << std::endl;

    for (int i = 0; i < len2; ++i) {
        std::cout << str1[i] << str2[i] << "-" << (int)(str1[i]) << std::endl;

    }
    std::cout << (int)(str1[len1 - 1]) << std::endl;
    std::cout << str1 << std::endl;
}*/
