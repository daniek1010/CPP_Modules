/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:47:30 by danevans          #+#    #+#             */
/*   Updated: 2024/09/26 23:48:40 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap: Default constructor " << name << std::endl;
}

ClapTrap::ClapTrap(std::string name) 
: name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap: Parameterized constructor " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &to_copy){
	name = to_copy.name;
	energyPoints = to_copy.energyPoints;
	attackDamage = to_copy.attackDamage;
	hitPoints = to_copy.hitPoints;
	std::cout << "Copy assignment called " << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other){
	if (this != &other){
		name = other.name;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
		hitPoints = other.hitPoints;
	}
	std::cout << "Copy assignmemnt operator called " << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string& target){
	if (energyPoints == 0){
		std::cout << "ClapTrap: enery kaput " << std::endl;
		return ;
	}
	energyPoints -= 1;
	std::cout << "ClapTrap " << name << "attack " << target << " causing " 
	<< attackDamage << "  points of damage 😈 " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (hitPoints < amount){
		std::cout << hitPoints << amount << energyPoints << std::endl;
		std::cout << "ClapTap " << name << " couldnt take damage " << std::endl;
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
	std::cout << "ClapTrap: Mayday Mayday! Destructor called " << std::endl;
}