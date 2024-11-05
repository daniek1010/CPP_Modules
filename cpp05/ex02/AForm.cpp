/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:47:27 by danevans          #+#    #+#             */
/*   Updated: 2024/11/05 14:35:05 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() 
	: _name("Default_form"), _signGrade(150), _execGrade(150), _signStatus(false){
	// std::cout << "AForm: Default constructor " << std::endl;
}

AForm::AForm(std::string name, int signGrade, int execGrade) 
	: _name(name), _signGrade(signGrade), _execGrade(execGrade), _signStatus(false){
	if (getSignGrade() > 150 || getExecGrade() > 150)
		throw AForm::GradeTooLowException(_name);
	else if (getSignGrade()  < 1 || getExecGrade() < 1)
		throw AForm::GradeTooHighException(_name);
	// std::cout << "AForm: Parameterized constructor " << std::endl;
}

AForm::AForm(const AForm &to_copy){
	//std::cout << " AForm: Copy constructor " << std::endl;
	_name = to_copy.getName();
	_signGrade = to_copy.getSignGrade();
	_execGrade = to_copy.getExecGrade();
	_signStatus = to_copy.getSignStatus();
}

AForm& AForm::operator=(const AForm &other){
	// std::cout << " AForm: Copy assignment constructor " << std::endl;
	if (this != &other){
		_name = other.getName();
		_signGrade = other.getSignGrade();
		_execGrade = other.getExecGrade();
		_signStatus = other.getSignStatus();	
	}
	return (*this);
	
}
void	AForm::beSigned(Bureaucrat &bureaucrat){
	int bureacratGrade = bureaucrat.getGrade();
	if (bureacratGrade > getSignGrade())
	{
		std::cout << bureacratGrade << std::endl;
		throw GradeTooLowException(bureaucrat.getName());
	}
	_signStatus = true;
	std::cout << *this << std::endl;
}

void	AForm::signForm(Bureaucrat &bureaucrat){
	if (getSignStatus())
		std::cout << bureaucrat.getName() << "signed "	<< getName() << std::endl;
	else	
		std::cout << bureaucrat.getName() << "couldn't sign "	<< getName() << std::endl;
	std::cout << *this <<  std::endl;
}

void	AForm::execute(Bureaucrat const & executor) const{
	(void) executor;
}
bool	AForm::getSignStatus() const{
	return (_signStatus);
}

int		AForm::getSignGrade() const{
	return (_signGrade);
}

int		AForm::getExecGrade() const{
	return (_execGrade);
}

std::string	AForm::getName() const {
	return (_name);
}

AForm::~AForm() {
	//std::cout << " AForm: Mayday Mayday destructor " << std::endl;
}

AForm::GradeTooLowException::GradeTooLowException(const std::string &name){
	message = name +  " Grade too low ";
}

const char *AForm::GradeTooLowException::what() const throw(){
	return (message.c_str());
}

AForm::GradeTooHighException::GradeTooHighException(const std::string &name){
	message = name +  " Grade too high ";
}

const char *AForm::GradeTooHighException::what() const throw(){
	return (message.c_str());
}

AForm::NotSignedException::NotSignedException(const std::string &name){
	message = name +  " form hasn't been signed ";
}
const char *AForm::NotSignedException::what() const throw(){
	return (message.c_str());
}

std::ostream &operator<<(std::ostream& os, AForm &AForm){
	os << "name      = "<< AForm.getName() << "\n"
	<< "signedStatus = " << (AForm.getSignStatus() ? "true" : "false")<< "\n"
	<< "signGrade    = " << AForm.getSignGrade() << "\n"
	<< "signExec     = " << AForm.getExecGrade() << std::endl;
	return (os);
}
