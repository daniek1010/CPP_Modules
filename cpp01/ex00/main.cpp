/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:54:20 by danevans          #+#    #+#             */
/*   Updated: 2024/09/25 08:28:38 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zoombie.hpp"

int main (){
	std::string name;
	std::cout << "Enter a name: ";
	std::cin >> name;
	randomChump(name);
	Zoombie* evaluator = newZombie(name);
	evaluator->announce();
	delete evaluator;
}