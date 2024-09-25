/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoombie.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:54:40 by danevans          #+#    #+#             */
/*   Updated: 2024/09/25 08:32:28 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zoombie.hpp"

void Zoombie::setName(std::string name){
	this->name = name;
}

const std::string& Zoombie::getName(void){
	return name;
}

void Zoombie::announce(void){
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
Zoombie::Zoombie(){
	std::cout << "Zoombie: " << getName() << "Constructor has risen" << std::endl;
}
Zoombie::~Zoombie(){
	std::cout << "Zoombie: " << getName() << "Mayday mayday , destructor down!" << std::endl;
}