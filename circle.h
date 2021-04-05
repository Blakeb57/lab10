#include "shapes.h"
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle:public Shape
{
    public:
        Circle();
        void input();
        double area();

    private:
        double radius;
};
#endif