/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 02:30:52 by danevans          #+#    #+#             */
/*   Updated: 2024/09/27 02:30:53 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "<BRAIN> Defualt constructor called " << std::endl;
}

Brain::Brain(const Brain &to_copy){
	std::cout << "<BRAIN> Copy constructor called " << std::endl;
	for (int i = 0; i < 100; i++){
			ideas[i] = to_copy.ideas[i];
	}
}

Brain& Brain::operator=(const Brain &other){
	std::cout << "<BRAIN> Copy assignment constructor called " << std::endl;
	if (this != &other){
		for (int i = 0; i < 100; i++){
			this->ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain(){
	std::cout << "<BRAIN> Destructor called " << std::endl;
}