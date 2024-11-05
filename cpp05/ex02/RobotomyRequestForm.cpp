/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:42:27 by danevans          #+#    #+#             */
/*   Updated: 2024/11/05 16:36:20 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string &target) : AForm(target, 72, 45), _target(target) {
	
}

RobotomyRequestForm::~RobotomyRequestForm() {
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &to_copy) {

}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other){
		
}