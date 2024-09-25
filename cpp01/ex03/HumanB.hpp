/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:55:47 by danevans          #+#    #+#             */
/*   Updated: 2024/09/23 21:55:48 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Human_B_HPP
#define Human_B_HPP

#include "Weapon.hpp"

class HumanB{
	public:
		HumanB(std::string name);
		void setWeapon(Weapon& weapon);
		void attack();
	private:
		std::string name;
		Weapon* weapon;

};

#endif