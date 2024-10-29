/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:41:12 by danevans          #+#    #+#             */
/*   Updated: 2024/09/26 23:46:17 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "Default constructor " << std::endl;
}

ClapTrap::ClapTrap(std::string name) 
: name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	// std::cout << "Parameterized Default constructor " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &to_copy){
	// std::cout << "Copy assignment called " << std::endl;
	name = to_copy.name;
	energyPoints = to_copy.energyPoints;
	attackDamage = to_copy.attackDamage;
	hitPoints = to_copy.hitPoints;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other){
	// std::cout << "Copy assignmemnt operator called " << std::endl;
	if (this != &other){
		name = other.name;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
		hitPoints = other.hitPoints;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target){
	if (energyPoints == 0 || hitPoints == 0){
		std::cout << "ClapTrap " << name << "energyPoint empty || hitPoint empty 💨" 
		<< std::endl;
		return ;
	}
	energyPoints -= 1;
	hitPoints -= attackDamage;
	std::cout << "ClapTrap " << name << "attack " << target << " causing " 
	<< attackDamage << "  points of damage 😈 " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (hitPoints < amount){
		std::cout << "ClapTap " << name << " doesn't exist " << std::endl;
		return ;
	}
	hitPoints -= amount;
	std::cout << "ClapTap " << name << "got damaged with 💨 " << amount << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount){
	if (energyPoints == 0){
		std::cout << "ClapTrap energyPoint empty 💨 " << std::endl;
		return ;
	}
	hitPoints += amount;
	energyPoints -= 1;
	std::cout << "ClapTrap " << name << "has been repaired and gained 🛠️ " << amount << std::endl;
}

ClapTrap::~ClapTrap(){
	// std::cout << "Mayday Mayday! Destructor called " << std::endl;
}