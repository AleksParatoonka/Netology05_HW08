#pragma once

#include <iostream>
#include "My_Exception.h"
#include <exception>

class Shape
{
protected:
    int edges;
    std::string name;
public:
    Shape(int a) {
        try {
            if (a == 0) { 
                throw My_Exception("количество сторон равно 0");
            }
            else {
                this->edges = a;
            }
        }
        catch (My_Exception& err)
        {
            std::cout << "Ошибка создания фигуры. Причина: " ;
            std::cerr << err.getError() << std::endl;
            std::cout << std::endl;
        }
    }
    Shape(int a, std::string name) {
        this->edges = a;
        this->name = name;
        print_info();
        try {
            if (a == 0) {
                throw My_Exception("количество сторон равно 0");
            }
        }
        catch (My_Exception& err)
        {
            std::cout << "Ошибка создания фигуры. Причина: ";
            std::cerr << err.getError() << std::endl;
            
        }
        std::cout << std::endl;
    }
    
    int get_edges();
    virtual void print_info();
};

