#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <string>
# include <cmath>
# include "Fixed.hpp"

class Point
{
private:
	Fixed const x;
	Fixed const y;
public:
	Point(void);
	Point(const float num_x, const float num_y);
	Point(const Point &to_copy);
	Point &operator=(const Point &other);
	Fixed getX(void) const;
	Fixed	getY(void) const;
	~Point();
};
bool bsp( Point const a, Point const b, Point const c, Point const p);


# endif