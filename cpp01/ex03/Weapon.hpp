/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:56:00 by danevans          #+#    #+#             */
/*   Updated: 2024/09/25 09:54:02 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon{
	public:
		Weapon(std::string type);
		const std::string& getType();
		void  setType(std::string type);
	private:
		std::string type;

};

# endif