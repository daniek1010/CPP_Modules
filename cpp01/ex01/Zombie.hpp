/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:55:02 by danevans          #+#    #+#             */
/*   Updated: 2024/09/25 08:54:33 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{
	public:
		Zombie();
		~Zombie();
		void				setName(std::string name);
		const std::string&	getName(void);
		void 				announce(void);
	private: 
		std::string name;
};

Zombie* zombieHorde( int N, std::string name );
// Zombie* zombieHorde_diff_names( int N, std::string names[] );

#endif