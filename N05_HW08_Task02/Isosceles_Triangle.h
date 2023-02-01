#pragma once
#include "Triangle.h"
class Isosceles_Triangle :
    public Triangle
{
    public:
        Isosceles_Triangle(double edge_a, double edge_b, double angle_a, double angle_b) :Triangle(edge_a, edge_b, edge_a, angle_a, angle_b, angle_a, "Равнобедренный треугольник") {}
};

