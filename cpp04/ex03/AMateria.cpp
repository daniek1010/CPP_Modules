/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 21:03:38 by danevans          #+#    #+#             */
/*   Updated: 2024/10/25 11:43:03 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("Default") {
 	//std::cout << "Amateria: Default constructor " << std::endl;
}

AMateria::AMateria(std::string const &type) : type (type) {
	//std::cout << "Amateria: Paramterized constructor " << std::endl;
}

AMateria::AMateria(const AMateria &to_copy) : type(to_copy.type){
	//std::cout << " Amateria: Copy constructor " << std::endl;
}

AMateria& AMateria::operator=(const AMateria &other){
	if (this != &other)
		type = other.type;
	//std::cout << " Amateria: Copy assignment constructor " << std::endl;
	return *this;
}

AMateria::~AMateria(){
	//std::cout << " Amateria: Mayday Mayday destructor " << std::endl;
}

std::string const& AMateria::getType()const{
	return (type);
}

void AMateria::use(ICharacter& target){	
	//std::cout << " Amateria: use function " << std::endl;
	(void)target;		
}