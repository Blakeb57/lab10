#include "shapes.h"
#ifndef TRAPEZOID_H
#define TRAPEZOID_H

class Trapezoid:public Shape
{   
    public:
        Trapezoid();
        void input();
        double area();
    
    private:
        double base1;
        double base2;
        double height;
};
#endif