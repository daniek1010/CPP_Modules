/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:55:06 by danevans          #+#    #+#             */
/*   Updated: 2024/09/25 08:54:39 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	Zombie* horde;
	horde = new Zombie[N];
	for (int i = 0; i < N; i++){
		horde[i].setName(name);
	}
	return horde;
}

// Zombie* zombieHorde_diff_names( int N, std::string name[] ){
// 	Zombie* horde;
// 	horde = new Zombie[N];
// 	for (int i = 0; i < N; i++){
// 		horde[i].setName(name[i]);
// 	}
// 	return horde;
// }
