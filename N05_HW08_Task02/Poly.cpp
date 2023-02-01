#include "Poly.h"
#include <iostream>

double Poly::get_edge(char x) {
    switch (x) {
    case 'a':
        return edge_a;
    case 'b':
        return edge_b;
    case 'c':
        return edge_c;
    case 'd':
        return edge_d;
    }
}
double Poly::get_angle(char x) {
    switch (x) {
    case 'a':
        return angle_a;
    case 'b':
        return angle_b;
    case 'c':
        return angle_c;
    case 'd':
        return angle_d;
    }
}

void Poly::print_info(){
    //Shape::print_info();
    std::cout << "Стороны: a=" << get_edge('a') << " b=" << get_edge('b') << " c=" << get_edge('c') << " d=" << get_edge('d') << std::endl;
    std::cout << "Углы: A=" << get_angle('a') << " B=" << get_angle('b') << " C=" << get_angle('c') << " D=" << get_angle('d') << std::endl;
    std::cout << std::endl;
}
