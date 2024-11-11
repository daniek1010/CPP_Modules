/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:20:27 by danevans          #+#    #+#             */
/*   Updated: 2024/11/11 15:55:22 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include <ctime>

int	main(void)
{
	std::srand(std::time(0));

	Intern	intern;
	AForm	*robo_form;
	AForm	*shrub_form;
	AForm	*president_form;
	AForm	*unknown_form;

	std::cout << "INTERN TESTS:" << std::endl;
	try
	{
		shrub_form = intern.makeForm("shrubbery creation", "shrub");
		president_form = intern.makeForm("presidential pardon", "president");
		robo_form = intern.makeForm("robotomy request", "robo");
		unknown_form = intern.makeForm("not_found", "drive");
	}
	catch (Intern::wrongFormException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	
	delete robo_form;
	delete shrub_form;
	delete president_form;
	delete unknown_form;
	return (0);
}