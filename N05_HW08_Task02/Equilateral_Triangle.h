#pragma once
#include "Triangle.h"
class Equilateral_Triangle :
    public Triangle
{
    public:
        Equilateral_Triangle(double edge_a) :Triangle(edge_a, edge_a, edge_a, 60, 60, 60, "Равносторонний треугольник") {}
};

