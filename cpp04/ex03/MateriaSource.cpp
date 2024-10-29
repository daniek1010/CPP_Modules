/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:24:27 by danevans          #+#    #+#             */
/*   Updated: 2024/10/24 09:54:48 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource(){
	//std::cout << "MateriaSurce: default constructor called" << std::endl;
	for (int i = 0; i < 4; i++){
		_materiaSource[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &to_copy){
	//std::cout << "MateriaSurce: copy assignment constructor called" << std::endl;
	for (int i = 0; i < 4; i++){
		_materiaSource[i] = _materiaSource[i] ? to_copy._materiaSource[i]->clone() : NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &others){	
	//std::cout << "MateriaSurce: copy operator constructor called" << std::endl;
	if (this != &others){
		for (int i = 0; i < 4; i++){
			_materiaSource[i] = _materiaSource[i] ? others._materiaSource[i]->clone() : NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource(){	
	//std::cout << "MateriaSurce: destructor called" << std::endl;
	for (int i = 0; i < 4; i++){
		delete _materiaSource[i];
	}
}

void MateriaSource::learnMateria(AMateria* to_copy){
	for (int i = 0; i < 4; i++){
		if (_materiaSource[i] == NULL){
			_materiaSource[i] = to_copy;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++){
		if (_materiaSource[i] && type == _materiaSource[i]->getType()){
			return (_materiaSource[i]);
		}
	}
	return (0);
}
