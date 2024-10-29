/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:49:13 by danevans          #+#    #+#             */
/*   Updated: 2024/09/26 23:55:32 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "Scavtrap : Default derived constructor " << std::endl;
	hitPoints = 100; 
	energyPoints = 50;
	attackDamage = 20;
}


ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "Scavtrap : Parameterized derived constructor " << std::endl;
	hitPoints = 100; 
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::~ScavTrap(){
	std::cout << "Scavtrap : Mayday Mayday! Destructor " << std::endl;
}

void	ScavTrap::guardGate(){
	std::cout << "ScavTrap is Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target){
	if (energyPoints == 0 || hitPoints == 0){
		std::cout << "ScavTrap: enery energyPoint empty " << std::endl;
		return ;
	}
	energyPoints -= 1;
	std::cout << "ScavTrap: " << name << "attack " << target << " causing " 
	<< attackDamage << "  points of damage 😈 " << std::endl;
}