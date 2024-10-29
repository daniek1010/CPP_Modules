#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max(a, b) << std::endl;

// Fixed dan(10);
// Fixed evans(25);
// dan = evans;
// dan.setRawBits(2560);
// std::cout << "\n from here just checkingdfgfdfg " << dan << std::endl;
// std::cout << "\n from here just checking " << dan.getRawBits() << std::endl;
return 0;
}
