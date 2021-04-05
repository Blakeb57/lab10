#include <iostream>
#include <cmath>
#ifndef SHAPES_H
#define SHAPES_H
using namespace std;
#define M-PI 3.14

class Shape
{
    public:
        Shape();
        virtual void input();
        double cost();
        virtual double area();

    private:
        double thickness;
        double cost_per_cubic_unit;
};
#endif