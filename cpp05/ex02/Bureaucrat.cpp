/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 21:03:38 by danevans          #+#    #+#             */
/*   Updated: 2024/11/05 20:06:52 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default_name") , _grade (150) {
	// std::cout << "Bureaucrat: Default constructor " << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) {
	// std::cout << "Bureaucrat: Paramterized constructor " << std::endl;
	if ( grade < 1)
		throw GradeTooHighException(name);
	else if ( grade > 150){
		std::cout << "gets here" << std::endl;
		throw GradeTooLowException(name);	
	}
	setGrade(grade);
	setName(name);
}


Bureaucrat::Bureaucrat(const Bureaucrat &to_copy) {
	//std::cout << " Bureaucrat: Copy constructor " << std::endl;
	_name = to_copy._name;
	_grade = to_copy._grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other){
	// std::cout << " Amateria: Copy assignment constructor " << std::endl;
	if (this != &other){
		_name = other._name;
		_grade = other._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat(){
	//std::cout << " Amateria: Mayday Mayday destructor " << std::endl;
}

void Bureaucrat::incrementGrade(const std::string &name){
	int grade = getGrade();
	if (name == _name) {
		grade--;
		if (grade < 1)
			throw GradeTooHighException(name);		
		else if ( grade > 150)
			throw GradeTooLowException(name);
		setGrade(grade);	
	}
}

void Bureaucrat::decrementGrade(const std::string &name){
	int grade = getGrade();
	if (name == _name) {
		grade++;
		if (grade < 1)
			throw GradeTooHighException(name);		
		else if ( grade > 150)
			throw GradeTooLowException(name);
		setGrade(grade);	
	}
}

void Bureaucrat::setName(const std::string name) {
	_name = name;
}

void Bureaucrat::setGrade(const int grade) {
	_grade = grade;			
}

std::string Bureaucrat::getName() const{
	return (_name);
}

int Bureaucrat::getGrade() const {
	return (_grade);
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string &name){
	message = name +  " Grade too low ";
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return (message.c_str());
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string &name){
	message = name +  " Grade too high ";
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return (message.c_str());
}

void Bureaucrat::executeForm(AForm const & form) const {
	try {
		form.execute(this);
		std::cout << getName() << "executed " << form.getName() << std::endl;
	} catch (const Bureaucrat::GradeTooHighException &high){
		std::cerr << high.what() << std::endl;
		std::cout << getName() << "couldnt executed " << form.getName() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException &low){
		std::cerr << low.what() << std::endl;
		std::cout << getName() << "couldnt executed " << form.getName() << std::endl;
	}
 }

std::ostream &operator<<(std::ostream& os, Bureaucrat &bureaucrat){
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}