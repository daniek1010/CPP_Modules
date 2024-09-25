/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:55:33 by danevans          #+#    #+#             */
/*   Updated: 2024/09/23 21:55:34 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Human_A_HPP
#define Human_A_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA{
	public:
		HumanA(const std::string& name, Weapon& weapon);
		void attack();
	private:
		std::string name;
		Weapon& weapon;
};

#endif