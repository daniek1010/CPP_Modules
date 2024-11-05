/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:20:27 by danevans          #+#    #+#             */
/*   Updated: 2024/11/05 20:31:33 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

void	signingFormwitDefault(void){
	AForm *test = new ShrubberyCreationForm("checker");
	AForm dan();
	
	ShrubberyCreationForm form("daniel");
	Bureaucrat dan("Mr Evans ", 17);
	try{
		std::cout << form << std::endl;
		form.beSigned(dan);	
	} catch (const Form::GradeTooHighException &high){
		std::cerr << high.what() << std::endl;
	} catch (const Form::GradeTooLowException &low){
		std::cerr << low.what() << std::endl;
	}
	//showing statues here;
	form.signForm(dan);
}

// void	signingFormwitAssignedValues(void){
// 	Bureaucrat dan("Bureaucrat Evans ", 17);
// 	Form form("Repairs", 12, 7);
// 	try{
// 		form.beSigned(dan);	
// 	} catch (const Form::GradeTooHighException &high){
// 		form.signForm(dan);
// 		std::cerr << high.what() << std::endl;
// 	} catch (const Form::GradeTooLowException &low){
// 		form.signForm(dan);
// 		std::cerr << low.what() << std::endl;
// 	}
// }

int main (void){

	signingFormwitDefault();
	// signingFormwitAssignedValues();
	
	return 0;
}
