// N05_HW08_Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <windows.h>
#include <exception>

int function(std::string str, int forbidden_length) {
    if (str.length() == forbidden_length)
    {
        throw "�� ����� ����� ��������� �����! �� ��������";
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
    std::cout << "������� ��������� �����: ";
    std::cin >> l; 

    while (true) {
        try
        {
            std::cout << "������� �����: ";
            std::cin >> input;
            std::cout << "����� ����� \"" << input << "\" ����� " << function(input, l) << std::endl;
        }
        catch (const char* bad_length)
        {
            std::cerr << bad_length << std::endl;
            //break;
            return 0;
        }
        
    }
    
}