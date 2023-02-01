#include "Triangle.h"
#include <iostream>

double Triangle::get_edge(char x) {
    switch (x) {
    case 'a':
        return edge_a;
    case 'b':
        return edge_b;
    case 'c':
        return edge_c;
    }
}
double Triangle::get_angle(char x) {
    switch (x) {
    case 'a':
        return angle_a;
    case 'b':
        return angle_b;
    case 'c':
        return angle_c;
    }
}

void Triangle::print_info()  {
    //Shape::print_info();
    std::cout << "Стороны: a=" << get_edge('a') << " b=" << get_edge('b') << " c=" << get_edge('c') << std::endl;
    std::cout << "Углы: A=" << get_angle('a') << " B=" << get_angle('b') << " C=" << get_angle('c') << std::endl;
    std::cout << std::endl;
}
