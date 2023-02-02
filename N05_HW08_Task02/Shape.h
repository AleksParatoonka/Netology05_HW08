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
        
            if (a == 0) { 
                throw My_Exception("количество сторон равно 0");
            }
            else {
                this->edges = a;
            }
        
    }
    Shape(int a, std::string name) {
        this->edges = a;
        this->name = name;
        print_info();
        
            if (a == 0) {
                throw My_Exception("количество сторон равно 0");
            }
        std::cout << std::endl;
    }
    
    int get_edges();
    virtual void print_info();
};

