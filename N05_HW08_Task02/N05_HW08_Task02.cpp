// N05_HW06_Task03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <exception>

#include "My_Exception.h"

#include "Shape.h"

#include "Triangle.h"
#include "Square_Triangle.h"
#include "Isosceles_Triangle.h"
#include "Equilateral_Triangle.h"

#include "Poly.h"
#include "Parallelogram.h"
#include "Rect.h"
#include "Square.h"
#include "Rhombus.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    try {
        Shape shape(0, "Фигура");
    }
    catch (My_Exception& err)
    {
        std::cout << "Ошибка создания фигуры. Причина: ";
        std::cerr << err.getError() << std::endl;
    }
    try {
        Shape shape1(3, "Фигура");
    }
    catch (My_Exception& err)
    {
        std::cout << "Ошибка создания фигуры. Причина: ";
        std::cerr << err.getError() << std::endl;
    }
    try {
        Triangle triangle(10, 20, 30, 50, 60, 70);
    }
    catch (My_Exception& err)
    {
        std::cout << "Ошибка создания фигуры. Причина: ";
        std::cerr << err.getError() << std::endl;
    }
    try {
        Square_Triangle square_triangle1(10, 20, 30, 50, 60);
    }
    catch (My_Exception& err)
    {
        std::cout << "Ошибка создания фигуры. Причина: ";
        std::cerr << err.getError() << std::endl;
    }
    try {
        Square_Triangle square_triangle2(10, 20, 30, 30, 60);
    }
    catch (My_Exception& err)
    {
        std::cout << "Ошибка создания фигуры. Причина: ";
        std::cerr << err.getError() << std::endl;
    }
    try {
        Isosceles_Triangle isosceles_triangle(10, 20, 50, 60);
        
    }
    catch (My_Exception& err)
    {
        std::cout << "Ошибка создания фигуры. Причина: ";
        std::cerr << err.getError() << std::endl;
    }
    try {
        Equilateral_Triangle equilateral_triangle(30);
    }
    catch (My_Exception& err)
    {
        std::cout << "Ошибка создания фигуры. Причина: ";
        std::cerr << err.getError() << std::endl;
    }
    try {
        Poly poly(10, 20, 30, 40, 50, 60, 70, 80);
        
    }
    catch (My_Exception& err)
    {
        std::cout << "Ошибка создания фигуры. Причина: ";
        std::cerr << err.getError() << std::endl;
    }
    try {
        Poly poly1(10, 20, 30, 40, 50, 150, 70, 90);
    }
    catch (My_Exception& err)
    {
        std::cout << "Ошибка создания фигуры. Причина: ";
        std::cerr << err.getError() << std::endl;
    }
    try {
        Parallelogram parallelogram(20, 30, 30, 40);
    }
    catch (My_Exception& err)
    {
        std::cout << "Ошибка создания фигуры. Причина: ";
        std::cerr << err.getError() << std::endl;
    }
    try {
        Rect rectangle(10, 20);
    }
    catch (My_Exception& err)
    {
        std::cout << "Ошибка создания фигуры. Причина: ";
        std::cerr << err.getError() << std::endl;
    }
    try {
        Square square(20);
    }
    catch (My_Exception& err)
    {
        std::cout << "Ошибка создания фигуры. Причина: ";
        std::cerr << err.getError() << std::endl;
    }
    try {
        Rhombus rhombus(30, 30, 40);
    }
    catch (My_Exception& err)
    {
        std::cout << "Ошибка создания фигуры. Причина: ";
        std::cerr << err.getError() << std::endl;
    }
}