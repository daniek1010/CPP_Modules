/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:42:27 by danevans          #+#    #+#             */
/*   Updated: 2024/11/11 13:44:38 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) 
	: AForm("RobotomyRequestForm", 72, 45), _target(target) {
	// std::cout << "RobotomyRequestForm: Default constructor " << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	// std::cout << "RobotomyRequestForm: Destructor " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &to_copy)
	: AForm("RobotomyRequestForm", 72, 45), _target(to_copy._target) {
	// std::cout << "RobotomyRequestForm: copy constructor " << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other){
	// std::cout << "RobotomyRequestForm: copy assignment " << std::endl;
	if (this != &other) {
		_target = other._target;
	}
	return (*this);	
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	if (executor.getGrade() > getExecGrade()){
		throw (AForm::GradeTooLowException(executor.getName(), _target));
	}
	if (!getSignStatus())
		throw (AForm::NotSignedException(executor.getName()));
	int success = std::rand() % 2; 
	std::cout << " drilling noises \n";
	if (success == 1)
		std::cout << this->_target << " has been robotomized" << std::endl;
	else
		throw (AForm::FailureException(executor.getName(), "Robotomy Failed"));
}