/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:42:36 by danevans          #+#    #+#             */
/*   Updated: 2024/11/05 20:36:32 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): AForm("ShrubberyCreationForm", 145, 137), _target(target) {
	// std::cout << "Shurbberry: Default constructor " << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	// std::cout << "Shurbberry: Destructor " << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &to_copy) 
	: AForm("ShrubberyCreationForm", 145, 137), _target(to_copy._target){
	// std::cout << "Shurbberry: copy constructor " << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other){	
	// std::cout << "Shurbberry: copy assignment " << std::endl;
	if (this != &other) {
		_target = other._target;
	}
	return (*this);
		
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > getExecGrade()){
		throw (Bureaucrat::GradeTooLowException(executor.getName()));
	}
	if (!getSignStatus())
		throw (NotSignedException(executor.getName()));
	else
	{
		std::ofstream outFile ((_target + "_shrubbery").c_str());
		if (outFile.is_open()) {
        outFile << "       ccee88oo\n";
        outFile << "  C8O8O8Q8PoOb o8oo\n";
        outFile << " dOB69QO8PdUOpugoO9bD\n";
        outFile << "CgggbU8OU qOp qOdoUOdcb\n";
        outFile << "    6OuU  /p u gcoUodpP\n";
        outFile << "      \\\\//  /douUP\n";
        outFile << "        \\\\////\n";
        outFile << "         |||/\\\n";
        outFile << "         |||\\/\n";
        outFile << "         |||||\n";
        outFile << "   .....//||||\\....\n";

        outFile.close();
    }
		else
      	  std::cerr << "Could not open file for writing." << std::endl;
	}
}