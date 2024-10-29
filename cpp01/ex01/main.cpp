/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:54:52 by danevans          #+#    #+#             */
/*   Updated: 2024/09/25 13:05:32 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	int i, N;
	std::string name;
	std::string input_number;
	i = 0;
	std::cout << "Enter NUMBER OF ZOOMBIE: " << std::endl;
	std::cin >> N;
	std::cout << "Enter name: " << std::endl;
	std::cin >> name;
	Zombie* hordes = zombieHorde(N, name);
	while (i < N){
		hordes[i].announce();
		i++;
	}
	delete[] hordes;
	// std::string names[N];
	// std::cout << "**** Printing with diff array of names *****" << std::endl;
	// for (int j = 0; j < N; j++){
	// 	std::cout << "Enter name: " << std::endl;
	// 	std::cin >> names[j];
	// }
	// Zombie* hordes_diff_names = zombieHorde_diff_names(N, names);
	// i = 0;
	// while (i < N){
	// 	hordes_diff_names[i].announce();
	// 	i++;
	// }
	// delete[] hordes_diff_names;
}