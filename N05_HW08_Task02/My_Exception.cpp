#include "My_Exception.h"
#include <iostream>
#include <string>
#include <exception> 


const char* My_Exception::getError()
{
    return err.c_str();
}
//const char* My_Exception::what()  
//{
//    return err.c_str();
//}