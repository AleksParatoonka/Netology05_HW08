#pragma once
#include "Parallelogram.h"
class Rhombus :
    public Parallelogram
{
    public:
        Rhombus(double edge_a, double angle_a, double angle_b) :Parallelogram(edge_a, edge_a, angle_a, angle_b, "Ромб") {}
};

