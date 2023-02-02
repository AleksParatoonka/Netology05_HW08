// N05_HW08_Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <windows.h>
#include <exception>

class bad_length : public std::exception
{
private:
    std::string err;
public:
    bad_length(std::string error) : err(error) {}
    const char* getError()
    {
        return err.c_str();
    }
};

int function(std::string str, int forbidden_length) {
    if (str.length() == forbidden_length)
    {
        throw bad_length("Вы ввели слово запретной длины! До свидания");
    }
    else 
    {
        return str.length();
    }
}


int main()
{
    //setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    int l;
    std::string input;
    std::cout << "Введите запретную длину: ";
    std::cin >> l; 

    while (true) {
        try
        {
            std::cout << "Введите слово: ";
            std::cin >> input;
            std::cout << "Длина слова \"" << input << "\" равна " << function(input, l) << std::endl;
        }
        catch (bad_length& err)
        {
            std::cerr << err.getError() << std::endl;
            return 0;
        }
    }
    
}