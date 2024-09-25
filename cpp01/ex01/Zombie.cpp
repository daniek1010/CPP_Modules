/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:54:56 by danevans          #+#    #+#             */
/*   Updated: 2024/09/25 08:38:37 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setName(std::string name){
	this->name = name;
}

const std::string& Zombie::getName(void){
	return name;
}

void Zombie::announce(void){
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::Zombie(){
	std::cout << "Zoombie: " << getName() << "Constructor has risen" << std::endl;
}
Zombie::~Zombie(){
	std::cout << "Zoombie: " << getName() << "Mayday mayday , destructor down!" << std::endl;
}