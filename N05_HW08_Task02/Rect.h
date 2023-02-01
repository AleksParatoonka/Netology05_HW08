#pragma once
#include "Parallelogram.h"
class Rect :
    public Parallelogram
{
    public:
        Rect(double edge_a, double edge_b) :Parallelogram(edge_a, edge_b, 90, 90, "Прямоугольник") {}
        Rect(double edge_a, double edge_b, std::string name) :Parallelogram(edge_a, edge_b, 90, 90, name) {}
};

