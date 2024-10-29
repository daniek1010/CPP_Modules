/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:55:40 by danevans          #+#    #+#             */
/*   Updated: 2024/09/26 23:55:41 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap: defaults derived class" << std::endl;
	hitPoints = 100; 
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap (name){
	std::cout << "FragTrap: parameterized derived class" << std::endl;
	hitPoints = 100; 
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap: Mayday Mayday! Destructor called " << std::endl;
}

void	FragTrap::highFivesGuys(void){
	if (energyPoints == 0){
		std::cout << "FragTrap: energy empty " << std::endl;
		return ;
	}
	energyPoints -= 1;
	std::cout << "FragTrap: " << "HIGH FIVE!  🖐️ 🖐️ " << std::endl;
}