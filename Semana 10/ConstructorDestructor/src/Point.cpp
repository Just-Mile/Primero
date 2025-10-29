#include "Point.h"

Point::Point()
{
    x = 0;
    y = 0;
    std::cout << "Llamando al constructor" << std::endl;
}

Point::Point(int x_, int y_)
{
    x = x_;
    y = y_;
    std::cout << "Llamando al constructor  con args" << std::endl;
}

Point::~Point()
{
    std::cout << "Llamando al destructor" << std::endl;
}

void Point::print() const
{
    std:cout << x << ", " << y << cout::endl;
}
