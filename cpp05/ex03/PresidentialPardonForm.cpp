/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:42:20 by danevans          #+#    #+#             */
/*   Updated: 2024/11/11 13:44:57 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	: AForm("PresidentialPardonForm", 25, 5), _target(target) {
	// std::cout << "PresidentialPardonForm: Default constructor " << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	// std::cout << "PresidentialPardonForm: Destructor " << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &to_copy)
	: AForm("PresidentialPardonForm", 25, 5), _target(to_copy._target) {
	// std::cout << "PresidentialPardonForm: copy constructor " << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other){
	// std::cout << "PresidentialPardonForm: copy assignment " << std::endl;
	if (this != &other) {
		_target = other._target;
	}
	return (*this);	
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (executor.getGrade() > getExecGrade()){
		throw (AForm::GradeTooLowException(executor.getName(), _target));
	}
	if (!getSignStatus())
		throw (AForm::NotSignedException(executor.getName()));
	else
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}