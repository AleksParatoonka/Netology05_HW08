#pragma once
#include "Shape.h"
class Poly :
    public Shape
{
    protected:
        double edge_a;
        double edge_b;
        double edge_c;
        double edge_d;

        double angle_a;
        double angle_b;
        double angle_c;
        double angle_d;
    public:
        Poly(double edge_a, double edge_b, double edge_c, double edge_d, double angle_a, double angle_b, double angle_c, double angle_d, std::string name) :Shape(4) {
            this->name = name;
            Shape::print_info();
            try {
                
                if ((angle_a + angle_b + angle_c + angle_d) != 360) {
                    
                    throw My_Exception("сумма углов не равна 360");
                }
                else if (edges != 4) {
                    throw My_Exception("количество сторон не равно 4 ");
                }
                else {
                    
                    this->edge_a = edge_a;
                    this->edge_b = edge_b;
                    this->edge_c = edge_c;
                    this->edge_d = edge_d;
                    this->angle_a = angle_a;
                    this->angle_b = angle_b;
                    this->angle_c = angle_c;
                    this->angle_d = angle_d;
                    //this->name = name;
                    print_info();
                }
            }
            catch (My_Exception& err)
            {
                std::cout << "Ошибка создания фигуры. Причина: ";
                std::cerr << err.getError() << std::endl;
                std::cout << std::endl;
            }
        }
        Poly(double edge_a, double edge_b, double edge_c, double edge_d, double angle_a, double angle_b, double angle_c, double angle_d) :Shape(4) {
            name = "Четырёхугольник";
            Shape::print_info();
            try {
                if ((angle_a + angle_b + angle_c + angle_d) != 360) {
                    
                    throw My_Exception("сумма углов не равна 360");
                }
                else if (edges != 4) {\
                    
                    throw My_Exception("количество сторон не равно 4 ");
                }
                else {
                    //Shape::print_info();
                    this->edge_a = edge_a;
                    this->edge_b = edge_b;
                    this->edge_c = edge_c;
                    this->edge_d = edge_d;
                    this->angle_a = angle_a;
                    this->angle_b = angle_b;
                    this->angle_c = angle_c;
                    this->angle_d = angle_d;
                    //name = "Четырёхугольник";
                    print_info();
                }
            }
            catch (My_Exception& err)
            {
                std::cout << "Ошибка создания фигуры. Причина: ";
                std::cerr << err.getError() << std::endl;
                std::cout << std::endl;
            }
        }
        double get_edge(char x);
        double get_angle(char x);


        void print_info() override;
};

