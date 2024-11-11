/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:47:27 by danevans          #+#    #+#             */
/*   Updated: 2024/11/05 14:35:05 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() 
	: _name("Default_form"), _signGrade(150), _execGrade(150), _signStatus(false){
	// std::cout << "Form: Default constructor " << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade) 
	: _name(name), _signGrade(signGrade), _execGrade(execGrade), _signStatus(false){
	if (getSignGrade() > 150 || getExecGrade() > 150)
		throw Form::GradeTooLowException(_name);
	else if (getSignGrade()  < 1 || getExecGrade() < 1)
		throw Form::GradeTooHighException(_name);
	// std::cout << "Form: Parameterized constructor " << std::endl;
}

Form::Form(const Form &to_copy){
	//std::cout << " Form: Copy constructor " << std::endl;
	_name = to_copy.getName();
	_signGrade = to_copy.getSignGrade();
	_execGrade = to_copy.getExecGrade();
	_signStatus = to_copy.getSignStatus();
}

Form& Form::operator=(const Form &other){
	// std::cout << " Form: Copy assignment constructor " << std::endl;
	if (this != &other){
		_name = other.getName();
		_signGrade = other.getSignGrade();
		_execGrade = other.getExecGrade();
		_signStatus = other.getSignStatus();	
	}
	return (*this);
	
}
void	Form::beSigned(Bureaucrat &bureaucrat){
	int bureacratGrade = bureaucrat.getGrade();
	if (bureacratGrade > getSignGrade())
	{
		std::cout << bureacratGrade << std::endl;
		throw GradeTooLowException(bureaucrat.getName());
	}
	_signStatus = true;
	std::cout << *this << std::endl;
}

void	Form::signForm(Bureaucrat &bureaucrat){
	if (getSignStatus())
		std::cout << bureaucrat.getName() << "signed "	<< getName() << std::endl;
	else	
		std::cout << bureaucrat.getName() << "couldn't sign "	<< getName() << std::endl;
	std::cout << *this <<  std::endl;
}

bool	Form::getSignStatus() const{
	return (_signStatus);
}

int		Form::getSignGrade() const{
	return (_signGrade);
}

int		Form::getExecGrade() const{
	return (_execGrade);
}

std::string	Form::getName() const {
	return (_name);
}

Form::~Form() {
	//std::cout << " Form: Mayday Mayday destructor " << std::endl;
}

Form::GradeTooLowException::GradeTooLowException(const std::string &name){
	message = name +  " Grade too low ";
}

const char *Form::GradeTooLowException::what() const throw(){
	return (message.c_str());
}

Form::GradeTooHighException::GradeTooHighException(const std::string &name){
	message = name +  " Grade too high ";
}

const char *Form::GradeTooHighException::what() const throw(){
	return (message.c_str());
}

std::ostream &operator<<(std::ostream& os, Form &form){
	os << "name      = "<< form.getName() << "\n"
	<< "signedStatus = " << (form.getSignStatus() ? "true" : "false")<< "\n"
	<< "signGrade    = " << form.getSignGrade() << "\n"
	<< "signExec     = " << form.getExecGrade() << std::endl;
	return (os);
}
