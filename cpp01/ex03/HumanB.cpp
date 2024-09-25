/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:55:41 by danevans          #+#    #+#             */
/*   Updated: 2024/09/25 10:03:17 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name){
	this->weapon = NULL;
}

void HumanB::setWeapon(Weapon& weapon){
	this->weapon = &weapon;
}

void HumanB::attack(){
	if (weapon) {
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    }
	else {
        std::cout << name << " has no weapon to attack with!" << std::endl;
	}
}
