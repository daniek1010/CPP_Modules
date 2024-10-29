/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 02:31:02 by danevans          #+#    #+#             */
/*   Updated: 2024/09/27 02:31:03 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal (){
	type = ("Dog");
	std::cout << "<DOG> Default constructor called " << std::endl;
	brain = new Brain();
	// std::cout << "<DOG> Default constructor called " << std::endl;
}

Dog::Dog(const Dog &to_copy) : Animal(to_copy){
	brain = new Brain(*to_copy.brain);
	type = to_copy.type;
	std::cout << "<DOG> Copy constructor called " << std::endl;
}

Dog& Dog::operator=(const Dog &other){
	if (this != &other){
		type = other.type;
		delete brain;
		brain = new Brain (*other.brain);
	}
	std::cout << "<DOG> Copy assignment constructor called " << std::endl;
	return *this;
}

Dog::~Dog(){
	delete brain;
	std::cout << "<DOG> Destructor called " << std::endl;
}

Brain* Dog::getBrain() const {
        return brain;
    }

void Dog::makeSound() const{
	std::cout << "<DOG> woof woof sound called " << std::endl;
}