/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:19:26 by danevans          #+#    #+#             */
/*   Updated: 2024/10/25 11:50:30 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name ("Default") {
	//std::cout << "Character: Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++){
		_inventory[i] = NULL;
		_inventoryUnequip[i] = NULL;
	}
}

Character::Character(std::string const &name) : ICharacter (), _name (name){
	//std::cout << "Character: parameterized constructor called" << std::endl;
	for (int i = 0; i < 4; i++){
		_inventory[i] = NULL;
		_inventoryUnequip[i] = NULL;
	}
}

Character::~Character() {
	//std::cout << "Character: destructor called" << std::endl;
	for (int i = 0; i < 4; i++){
		delete _inventory[i];
		delete _inventoryUnequip[i];
	}
}

Character::Character(const Character &to_copy){
	//std::cout << "Character: copy assignment called" << std::endl;
	for (int i = 0; i < 4; i++){
		_inventory[i] = to_copy._inventory[i] ? to_copy._inventory[i]->clone() : NULL;
		_inventoryUnequip[i] = to_copy._inventoryUnequip[i] ? to_copy._inventoryUnequip[i]->clone() : NULL;
	}	
	
}

Character& Character::operator=(const Character &others){
	//std::cout << "Character: copy operator called" << std::endl;
	if (this != &others){
		for (int i = 0; i < 4; i++){
			delete _inventory[i];
			_inventory[i] = others._inventory[i] ? others._inventory[i]->clone() : NULL;
			delete _inventoryUnequip[i];
			_inventoryUnequip[i] = others._inventoryUnequip[i] ? others._inventoryUnequip[i]->clone() : NULL;
		}
	}
	return (*this);
}

std::string const& Character::getName() const{
	return (_name);
}

void Character::equip(AMateria* m){
	for (int i = 0; i < 4; i++){
		if (m && _inventory[i] == NULL){
			_inventory[i] = m->clone();
			return ;
		}
	}
	
}

void Character::unequip(int idx){
	if (idx >= 0 && idx < 4 && _inventory[idx]){
		_inventoryUnequip[idx] = _inventory[idx];
		_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target){
	if (idx >= 0 && idx < 4 && _inventory[idx]){
		_inventory[idx]->use(target);
	}
}