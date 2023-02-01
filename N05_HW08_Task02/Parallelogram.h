#pragma once
#include "Poly.h"
class Parallelogram :
    public Poly
{
    public:
        Parallelogram(double edge_a, double edge_b, double angle_a, double angle_b) :Poly(edge_a, edge_b, edge_a, edge_b, angle_a, angle_b, angle_a, angle_b, "ֿאנאככוכמדנאלל") {}
        Parallelogram(double edge_a, double edge_b, double angle_a, double angle_b, std::string name) :Poly(edge_a, edge_b, edge_a, edge_b, angle_a, angle_b, angle_a, angle_b, name) {}
};

