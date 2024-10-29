/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:56:50 by danevans          #+#    #+#             */
/*   Updated: 2024/09/27 00:46:50 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "DiamondTrap.hpp"

using std::cout;
using std::endl;

int main(void)
{
    DiamondTrap Diamond("Bozo");
	Diamond.attack("bozo");
	Diamond.highFivesGuys();
	Diamond.guardGate();
	Diamond.whoAmI();
	
	// Diamond.attack("Pirates");
	// Diamond.attack("Kings");
	// Diamond.attack("Lions");
	// Diamond.beRepaired(10);
	// Diamond.takeDamage(100);
	// Diamond.guardGate();
	// Diamond.highFivesGuys();
	// Diamond.whoAmI();
    return 0;
}