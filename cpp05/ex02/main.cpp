/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:20:27 by danevans          #+#    #+#             */
/*   Updated: 2024/11/11 13:46:52 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

void	formShruberry(Bureaucrat &bureaucrat){
	AForm *form = new ShrubberyCreationForm("target");
	form->beSigned(bureaucrat);
	try{
		bureaucrat.executeForm(*form);
	} catch (const AForm::GradeTooHighException &high){
		std::cerr << high.what() << std::endl;
	} catch (const AForm::GradeTooLowException &low){
		std::cerr << low.what() << std::endl;
	}
	delete form;
}

void	formRobot(Bureaucrat &bureaucrat) {
	AForm *form = new RobotomyRequestForm("robo");
	form->beSigned(bureaucrat);
	try{
		bureaucrat.executeForm(*form);
	} catch (const AForm::GradeTooHighException &high){
		std::cerr << high.what() << std::endl;
	} catch (const AForm::GradeTooLowException &low){
		std::cerr << low.what() << std::endl;
	}
	delete form;
}

void	formPresidential(Bureaucrat &bureaucrat) {
	AForm *form = new PresidentialPardonForm("president");
	form->beSigned(bureaucrat);
	try{
		bureaucrat.executeForm(*form);
	} catch (const AForm::GradeTooHighException &high){
		std::cerr << high.what() << std::endl;
	} catch (const AForm::GradeTooLowException &low){
		std::cerr << low.what() << std::endl;
	}
	delete form;
}

int main (void){
	Bureaucrat evans("Mr Evans ", 18);
	formShruberry(evans);
	formRobot(evans);
	formPresidential(evans);
	
	return 0;
}
