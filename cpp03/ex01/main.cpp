/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:42:13 by danevans          #+#    #+#             */
/*   Updated: 2024/09/26 23:42:14 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

using std::cout;
using std::endl;

int main(void)
{
	ScavTrap evaluator1("Foo ");

	// for (int i = 0; i < 10; i++)
	// 	evaluator1.attack("Bar");
	// evaluator1.attack("Bar");
	
	// evaluator1.guardGate();
	// cout << endl;
	// for (int i = 0; i < 10; i++)
	// 	evaluator1.beRepaired(10);
	// evaluator1.takeDamage(10);
	// evaluator1.attack("Bar");
	// evaluator1.attack("another_bar");
	// evaluator1.beRepaired(10);
	
	// for (int i = 0; i < 10; i++)
	// 	evaluator1.attack("Bar");

	evaluator1.attack("Foo");
	cout << endl;
	evaluator1.takeDamage(100);
	cout << endl;
	evaluator1.beRepaired(500);
	evaluator1.guardGate();

	return 0;
}