/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:20:27 by danevans          #+#    #+#             */
/*   Updated: 2024/10/29 15:29:54 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void){
	//instantiating with default constructor sets name = Default_name and _grade = 150
	Bureaucrat daniel;
	std::cout << daniel << std::endl;
	// trying random instance and shuldnt throw an exception
	try {
		Bureaucrat dan1("dan1", 1);
		Bureaucrat dan2("dan2", 150);
		Bureaucrat dan3("dan3", 88);
		std::cout << dan1 << " within range " << std::endl;
		std::cout << dan2 << " within range " << std::endl;
		std::cout << dan3 << " within range " << std::endl;
	} catch (const GradeTooHighException &high){
		std::cerr << high.what() << std::endl;
	} catch (const GradeTooLowException &low){
		std::cerr << low.what() << std::endl;
	}
	// trying random instance and should throw an exception
	try {
		Bureaucrat dan4("dan4", 900);
		std::cout << "shouldnt get here" << std::endl;
		Bureaucrat dan5("dan5", 11);
		Bureaucrat dan6("dan6", 88);
		std::cout << dan4 << " !within range " << std::endl;
		std::cout << dan5 << " within range " << std::endl;
		std::cout << dan6 << " within range " << std::endl;
	} catch (const GradeTooHighException &high){
		std::cerr << high.what() << std::endl;
	} catch (const GradeTooLowException &low){
		std::cerr << low.what() << std::endl;
	}
	// incrementing the grade and shouldn't throw an exception
	Bureaucrat *dan = NULL;
	try {
		dan = new Bureaucrat("daniel", 150);
		dan->incrementGrade("daniel");
		dan->incrementGrade("daniel");
		dan->incrementGrade("daniel");
		dan->incrementGrade("daniel");
		dan->incrementGrade("daniel");
		dan->incrementGrade("daniel");
		std::cout << *dan << " within range " << std::endl;
	} catch (const GradeTooHighException &high){
		std::cerr << high.what() << std::endl;
	} catch (const GradeTooLowException &low){
		std::cerr << low.what() << std::endl;
	}
	// decrementing the grade and shouldn't throw an exception
	try {
		dan->decrementGrade("daniel");
		dan->decrementGrade("daniel");
		dan->decrementGrade("daniel");
		dan->decrementGrade("daniel");
		dan->decrementGrade("daniel");
		dan->decrementGrade("daniel");
		std::cout << *dan << " within range " << std::endl;
	} catch (const GradeTooHighException &high){
		std::cerr << high.what() << std::endl;
	} catch (const GradeTooLowException &low){
		std::cerr << low.what() << std::endl;
	}
	// decrementing the grade and should throw an exception
	try {
		dan->decrementGrade("daniel");
		std::cout << "shouldnt get here " << std::endl;
		dan->decrementGrade("daniel");
		dan->decrementGrade("daniel");
		dan->decrementGrade("daniel");
		dan->decrementGrade("daniel");
		dan->decrementGrade("daniel");
		std::cout << *dan << " within range " << std::endl;
	} catch (const GradeTooHighException &high){
		std::cerr << high.what() << std::endl;
	} catch (const GradeTooLowException &low){
		std::cerr << low.what() << std::endl;
	}
	delete dan;
	return 0;
}
