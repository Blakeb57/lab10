#include "rectangle.h"

Rectangle::Rectangle()
{

}

void Rectangle::input()
{
    cout << "Enter Length: ";
    cin >> length;
    cout << "Enter Width: ";
    cin >> width;
}

double Rectangle::area()
{
    return length * width;
}