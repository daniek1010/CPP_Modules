/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:20:27 by danevans          #+#    #+#             */
/*   Updated: 2024/11/05 14:38:11 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Bureaucrat.hpp"
#include "Form.hpp"

void	signingFormwitDefault(void){
	Form form;
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

void	signingFormwitAssignedValues(void){
	Bureaucrat dan("Bureaucrat Evans ", 17);
	Form form("Repairs", 12, 7);
	try{
		form.beSigned(dan);	
	} catch (const Form::GradeTooHighException &high){
		form.signForm(dan);
		std::cerr << high.what() << std::endl;
	} catch (const Form::GradeTooLowException &low){
		form.signForm(dan);
		std::cerr << low.what() << std::endl;
	}
}

int main (void){
	//instantiating with default constructor and printing values
		// Form daniel;
		// std::cout << daniel << std::endl;
	//trying random instance and shuldnt throw an exception
		// try {
		// 	Form dan1("dan1", 1, 20);
		// 	Form dan2("dan2", 150, 150);
		// 	Form dan3("dan3", 88, 88);
		// 	std::cout << dan1 << " within range\n " << std::endl;
		// 	std::cout << dan2 << " within range\n " << std::endl;
		// 	std::cout << dan3 << " within range\n " << std::endl;
		// } catch (const GradeTooHighException &high){
		// 	std::cerr << high.what() << std::endl;
		// } catch (const GradeTooLowException &low){
		// 	std::cerr << low.what() << std::endl;
		// }
	// trying random instance and should throw an exception
	// try {
	// 		// Form dan4("dan4", 900, 10);
	// 		// std::cout << "shouldnt get here" << std::endl;
	// 	Form dan5("dan5", 11, 170);
	// 	std::cout << dan5 << " within range " << std::endl;
	// } catch (const Form::GradeTooHighException &high){
	// 	std::cerr << high.what() << std::endl;
	// } catch (const Form::GradeTooLowException &low){
	// 	std::cerr << low.what() << std::endl;
	// }
	
	signingFormwitDefault();
	signingFormwitAssignedValues();
	
	return 0;
}
