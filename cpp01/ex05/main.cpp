/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:56:27 by danevans          #+#    #+#             */
/*   Updated: 2024/09/25 11:13:21 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

std::string getInput(){
	std::string input;
	
	while(1){
		std::cout <<  "Enter input here: " << std::endl;
		if (std::getline(std::cin, input))
		{
			if (input == "warning" || input == "debug" || input == "info" 
					|| input == "error" )
				break;
			std::cout << "Invalid option, please try again." << std::endl;
		}
		else {
			std::cerr << "Exiting ..." << std::endl;
			break ;
			
		}
	}
	return (input);
}

int main()
{
	Harl harl;
	std::string input;

	input = getInput();
	harl.complain(input);
	return 0;
}