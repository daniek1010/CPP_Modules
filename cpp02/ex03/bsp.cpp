#include "Point.hpp"

static Fixed absolute(Fixed x)
{
	if (x < 0)
		return x * -1;
	return x;
}

static Fixed calculateArea(Point const &a, Point const &b, Point const &c) {
    return absolute((a.getX() * (b.getY() - c.getY()) +
                  b.getX() * (c.getY() - a.getY()) +
                  c.getX() * (a.getY() - b.getY())).toFloat() / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const p) {
    Fixed areaABC = calculateArea(a, b, c);
    Fixed areaPAB = calculateArea(p, a, b);
    Fixed areaPAC = calculateArea(p, a, c);
    Fixed areaPBC = calculateArea(p, b, c);
    
    return (areaABC == areaPAB + areaPAC + areaPBC);
}