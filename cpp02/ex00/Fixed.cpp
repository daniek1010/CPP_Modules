#include "Fixed.hpp"

Fixed::Fixed(void){
	std::cout << "Default constructor called " << std::endl;
	value = 0;
}

Fixed::Fixed(const Fixed &to_copy){
	std::cout << "Copy assignment called " << std::endl;
	*this = to_copy;
}

Fixed& Fixed::operator=(const Fixed &other){
	std::cout << "Copy assignmemnt operator called " << std::endl;
	setRawBits(other.getRawBits());
	return *this;
}

Fixed::~Fixed(void){
	std::cout << "Mayday Mayday! Destructor called " << std::endl;
}
int		Fixed::getRawBits(void) const{
	std::cout << "getRawBits function called " << std::endl;
	return value;
}

void	Fixed::setRawBits(int const raw){
	std::cout << "setRawBits function called " << std::endl;
	value = raw;
}