#include "shapes.h"
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle:public Shape
{
    public:
        Rectangle();
        void input();
        double area();

    private:
        double length;
        double width;
};
#endif