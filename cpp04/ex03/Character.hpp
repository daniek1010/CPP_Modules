/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:36:35 by danevans          #+#    #+#             */
/*   Updated: 2024/10/25 11:43:47 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <string>

class Character : public ICharacter {
public:
	Character(void);
	Character(std::string const &name);
	Character(const Character &to_copy);
	Character &operator=(const Character &others);
	~Character();
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
private:
	std::string _name;
	AMateria* _inventory[4];
	AMateria* _inventoryUnequip[4];
};

#endif