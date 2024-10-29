/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 00:12:44 by danevans          #+#    #+#             */
/*   Updated: 2024/10/24 08:54:54 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure () : AMateria ("cure") {
	//std::cout << "Cure: Default constructor called" << std::endl;
}

Cure::Cure(const Cure &to_copy) : AMateria("cure"){	
	//std::cout << "Cure: copy assignment constructor called" << std::endl;
	type = to_copy.type;
}

Cure& Cure::operator=(const Cure &other){
	//std::cout << "Cure: copy operator constructor called" << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

Cure::~Cure () {
	//std::cout << "Cure: Destructor class called" << std::endl;
}

AMateria* Cure::clone() const {
	//std::cout << "Cure: clone called" << std::endl;
	AMateria *cure = new Cure();
	return (cure) ;
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}