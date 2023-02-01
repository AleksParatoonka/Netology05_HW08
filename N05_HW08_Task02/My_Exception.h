#pragma once

#include <iostream>
#include <string>
#include <exception> 

class My_Exception : public std::exception
{
    private:
        std::string err;

    public:
        My_Exception(std::string error) : err(error) {}
        //My_Exception(const char* error) : err(error) {}

        const char* getError();
        //virtual const char* what() const override;
        /*const char* getError()
        {
            return err.c_str();
        }
        virtual const char* what() const override
        {
        return err.c_str();
        }*/
};

