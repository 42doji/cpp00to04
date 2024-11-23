#include "../includes/Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const Point& src) : x(src.x), y(src.y) {} //

Point::Point(const Fixed& x, const Fixed& y) : x(x), y(y) {}

Point::~Point() {}

Point& Point::operator=(const Point& src)
{
	if (this == &src)
		return *this;
	return *this;
}

Fixed Point::getX() const
{
	return x;
}

Fixed Point::getY() const
{
	return y;
}

