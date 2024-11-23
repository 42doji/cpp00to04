#include "../includes/Point.hpp"

static Fixed   abs(Fixed x)
{
	if (x < 0)
		return x * -1;
	return x;
}

static Fixed area(Point const a, Point const b, Point const c)
{
	return abs((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed totalArea = area(a, b, c);
	Fixed area1 = area(a, b, point);
	Fixed area2 = area(a, c, point);
	Fixed area3 = area(b, c, point);

	return totalArea == area1 + area2 + area3;
}