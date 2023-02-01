#pragma once
#include "Rect.h"
class Square :
    public Rect
{
    public:
        Square(double edge_a) :Rect(edge_a, edge_a, " вадрат") {}
};

