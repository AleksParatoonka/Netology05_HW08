#pragma once
#include "Triangle.h"

class Square_Triangle :
    public Triangle
{
    public:
        Square_Triangle(double edge_a, double edge_b, double edge_c, double angle_a, double angle_b) :Triangle(edge_a, edge_b, edge_c, angle_a, angle_b, 90, "Прямоугольный треугольник") {}
};

