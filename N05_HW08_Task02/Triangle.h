#pragma once
#include "Shape.h"
#include <iostream>

class Triangle :     public Shape {
protected:
    double edge_a;
    double edge_b;
    double edge_c;
    double angle_a;
    double angle_b;
    double angle_c;
public:
    Triangle( double edge_a, double edge_b, double edge_c, double angle_a, double angle_b, double angle_c, std::string name) :Shape(3) {
        this->name = name;
        Shape::print_info();
        //try {
            if ( (angle_a + angle_b + angle_c) != 180) {
                throw My_Exception("сумма углов не равна 180");

            }
            else if (edges != 3) {
                throw My_Exception("количество сторон не равно 3 ");
            }
            else {
                this->edge_a = edge_a;
                this->edge_b = edge_b;
                this->edge_c = edge_c;
                this->angle_a = angle_a;
                this->angle_b = angle_b;
                this->angle_c = angle_c;
                //this->name = name;
                print_info();
            }
        /*}
        catch (My_Exception& err)
        {
            std::cout << "Ошибка создания фигуры. Причина: ";
            std::cerr << err.getError() << std::endl;
            std::cout << std::endl;
        }*/
    }

    Triangle(double edge_a, double edge_b, double edge_c, double angle_a, double angle_b, double angle_c) :Shape(3) {
        name = "Треугольник";
        Shape::print_info();
        //try {
            if ((angle_a + angle_b + angle_c) != 180) {
                throw My_Exception("сумма углов не равна 180");
            }
            else if (edges != 3) {
                throw My_Exception("количество сторон не равно 3 ");
            }
            else {
                //Shape::print_info();
                this->edge_a = edge_a;
                this->edge_b = edge_b;
                this->edge_c = edge_c;
                this->angle_a = angle_a;
                this->angle_b = angle_b;
                this->angle_c = angle_c;
                //name = "Треугольник";
                print_info();
            }
       /* }
        catch (My_Exception& err)
        {
            std::cout << "Ошибка создания фигуры. Причина: ";
            std::cerr << err.getError() << std::endl;
            std::cout << std::endl;
        }*/
    }

    double get_edge(char x);
    double get_angle(char x);
    void print_info() override;
};

