/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:57:53 by danevans          #+#    #+#             */
/*   Updated: 2024/09/25 18:36:26 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed(void){
	std::cout << "Default constructor called " << std::endl;
	value = 0;
}

Fixed::Fixed(const Fixed &to_copy){
	std::cout << "Copy assignment called " << std::endl;
	this->value = to_copy.getRawBits();;
}

Fixed& Fixed::operator=(const Fixed &other){
	std::cout << "Copy assignmemnt operator called " << std::endl;
	if (this != &other) {
		this->value = other.getRawBits();
	}
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