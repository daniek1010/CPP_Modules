#include "Point.hpp"


Point::Point() : x(0), y(0){
	// std::cout << "Default constructor called " << std::endl;
}

Point::Point(const float num_x, const float num_y)
: x(num_x) , y(num_y){}

Point::Point(const Point &to_copy) : x(to_copy.x), y(to_copy.y){
	// *this = to_copy;
}

Point& Point::operator=(const Point &other){
	(Fixed) x = other.getX();
	(Fixed) y =other.getY();
	return *this;
}

Fixed Point::getX(void) const{
	return x;
}

Fixed Point::getY(void) const{
	return y;
}
Point::~Point(){
	// std::cout << "Mayday Mayday! Destructor called " << std::endl;
}