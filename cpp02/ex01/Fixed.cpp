#include "Fixed.hpp"

Fixed::Fixed(void) : value(0){
	std::cout << "Default constructor called " << std::endl;
}

Fixed::Fixed(const int intValue)
: value(intValue * (1 << Fixed::bits)){
	std::cout << "Parameterized Int constructor called " << std::endl;
	std::cout << "\n" << value << std::endl;
}

Fixed::Fixed(const float floatvalue)
: value(roundf(floatvalue * (1 << Fixed::bits))){
	std::cout << "Parameterized Float constructor called " << value << std::endl;
}

Fixed::Fixed(const Fixed &to_copy){
	std::cout << "Copy assignment called " << std::endl;
	this->value = to_copy.value;
}

Fixed& Fixed::operator=(const Fixed &other){
	std::cout << "Copy assignmemnt operator called " << std::endl;
	if (this != &other)
		this->value = other.getRawBits();
	return *this;
}

Fixed::~Fixed(void){
	std::cout << "Mayday Mayday! Destructor called " << std::endl;
}

int		Fixed::getRawBits(void) const{
	// std::cout << "getRawBits function called " << std::endl;
	return value;
}

void	Fixed::setRawBits(int const raw){
	// std::cout << "setRawBits function called " << std::endl;
	value = raw;
}

float	Fixed::toFloat( void ) const{
	// std::cout << "toFloat Function called " << std::endl;
	return (float) value / (1 << Fixed::bits);
}

int		Fixed::toInt( void ) const{
	// std::cout << "toInt Function called " << std::endl;
	return  value / (1 << Fixed::bits);
}

std::ostream &operator<<(std::ostream &stream, const Fixed &nbr)
{
	stream << nbr.toFloat();
	return stream;
}