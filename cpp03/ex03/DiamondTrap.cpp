/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 00:01:32 by danevans          #+#    #+#             */
/*   Updated: 2024/09/27 01:36:22 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap() {
	std::cout << "Diamond Default derived class " << std::endl;
	FragTrap::hitPoints = 100;
	ScavTrap::energyPoints = 50;
	FragTrap::attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name) :
ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(name), name(name){
	FragTrap::hitPoints = 100;
	ScavTrap::energyPoints = 50;
	FragTrap::attackDamage = 30;
	std::cout << hitPoints << std::endl ;
	std::cout << energyPoints << std::endl ;
	std::cout << attackDamage << std::endl ;
	std::cout << std::endl;
	std::cout << "Diamond: Parameterized derived class " << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& to_copy) : 
ClapTrap(to_copy), ScavTrap(to_copy), FragTrap(to_copy){
	*this = to_copy;
	std::cout << "Diamond: Copy constructor derived class" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other){
	if (this != &other){
		name = other.name;
		ClapTrap::name = name + "_clap_name";
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	std::cout << "Diamond: Copy assignmet derived class" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "Diamond: Mayday Mayday! Destructor called " << std::endl;
}
 
void DiamondTrap::whoAmI(void){
	std::cout << hitPoints << std::endl ;
	std::cout << energyPoints << std::endl ;
	std::cout << attackDamage << std::endl ;
	std::cout << std::endl;
	std::cout << ScavTrap::attackDamage << std::endl ;
	std::cout << ScavTrap::energyPoints << std::endl ;
	std::cout << ScavTrap::hitPoints << std::endl ;
	std::cout << std::endl;
	std::cout << FragTrap::attackDamage << std::endl ;
	std::cout << FragTrap::energyPoints << std::endl ;
	std::cout << FragTrap::hitPoints << std::endl ;
	std::cout << "\nThis is:\nDiamondTrap: " << name << 
	"\nClapTrap: " << ClapTrap::name << "\n" << std::endl;
}