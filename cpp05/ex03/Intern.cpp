/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:41:02 by danevans          #+#    #+#             */
/*   Updated: 2024/11/11 15:51:19 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	// std::cout << "Intern constructed " << std::endl;;
}

Intern::~Intern() {
	// std::cout << " Intern destructor called" << std::endl;
}

Intern::Intern(const Intern &to_copy){
	(void)to_copy;
	//std::cout << " Intern: Copy constructor " << std::endl;
}

Intern &Intern::operator=(const Intern &other){
	(void)other;
	//std::cout << " Intern: Copy operator " << std::endl;
	return (*this);
}

static AForm *robotRequestForm(const std::string &target){
	
	AForm *form = new RobotomyRequestForm(target);
	return form;
}

static AForm *presidentialPardonForm(const std::string &target){
	AForm *form = new PresidentialPardonForm(target);
	return form;
}

static AForm *shruberryForm(const std::string &target){
	AForm *form = new ShrubberyCreationForm(target);
	return form;
}

Intern::wrongFormException::wrongFormException(const std::string &form){
	message = "Intern couldnt create " + form +  "\nForm doesnt exist";
}

const char *Intern::wrongFormException::what() const throw(){
	return (message.c_str());
}

AForm *Intern::makeForm(const std::string &form_obj, const std::string &target){
	AForm	*(*fct[3])(const std::string &target) = { robotRequestForm, presidentialPardonForm, shruberryForm};
	std::string form_target[] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	// AForm *form = NULL;
	for (int i = 0; i < 3; i++){
		// std::cout << "here = "<< form_target[i]  << "  form_obj = " << form_obj << "\n";
		if (form_target[i] == form_obj){
			std::cout << "Intern creates " << fct[i](target)->getName() << " successfully " << std::endl;
			return fct[i](target);
		}
	}
	throw (Intern::wrongFormException(form_obj));
	return (NULL);
}

class wrongFormException;