/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 00:33:49 by danevans          #+#    #+#             */
/*   Updated: 2024/10/24 08:54:20 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice () : AMateria ("ice") {
	//std::cout << "Ice: Default constructor called" << std::endl;
}

Ice::Ice(const Ice &to_copy) : AMateria("ice"){	
	//std::cout << "Ice: copy assignment constructor called" << std::endl;
	type = to_copy.type;
}

Ice& Ice::operator=(const Ice &other){
	//std::cout << "Ice: copy operator constructor called" << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

Ice::~Ice () {
	//std::cout << "Ice: Destructor class called" << std::endl;
}

AMateria* Ice::clone() const {
	//std::cout << "Ice: clone called" << std::endl;
	AMateria *ice = new Ice();
	return (ice);
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}