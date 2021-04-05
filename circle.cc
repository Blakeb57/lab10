#include "circle.h"

Circle::Circle()
{

}

void Circle::input()
{
    cout << "Enter Radius: ";
    cin >> radius;
}

double Circle::area()
{
    return M_PI * radius * radius;
}