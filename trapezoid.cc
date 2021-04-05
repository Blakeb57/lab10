#include "trapezoid.h"

Trapezoid::Trapezoid()
{

}

void Trapezoid::input()
{
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter base1: ";
    cin >> base1;
    cout << "Enter base2: ";
    cin >> base2;
}

double Trapezoid::area()
{
    return height * (base1 * base2) / 2.0;
}