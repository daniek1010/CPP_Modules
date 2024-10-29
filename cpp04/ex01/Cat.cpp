/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 02:30:40 by danevans          #+#    #+#             */
/*   Updated: 2024/09/27 02:30:41 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal (){
	std::cout << "<CAT> Default constructor called " << std::endl;
	type = ("Cat");
	brain = new Brain();
}

Cat::Cat(const Cat &to_copy) : Animal(to_copy){
	std::cout << "<CAT> Copy constructor called " << std::endl;
	brain = new Brain(*to_copy.brain);
	type = to_copy.type;
}

Cat& Cat::operator=(const Cat &other) {
	if (this != &other){
		type = other.type;
		delete brain;
		brain = new Brain(*other.brain);

	}
	std::cout << "<CAT> Copy assignment constructor called " << std::endl;
	return *this;
}

Cat::~Cat(){
	delete brain;
	std::cout << "<CAT> Destructor called " << std::endl;
}

Brain* Cat::getBrain() const {
        return brain;
    }

void Cat::makeSound() const{
	std::cout << "<CAT> meow meow sound called " << std::endl;
}