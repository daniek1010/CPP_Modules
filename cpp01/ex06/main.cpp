/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:56:39 by danevans          #+#    #+#             */
/*   Updated: 2024/09/23 21:56:40 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac , char *argv[])
{
	if (ac == 2){
		std::string input;
		Harl harl;
		input = argv[1];
		harl.complain(input);
	}
	else{
		std::cout << "Accepted fmt: ./harlFilter <level>\nlevels: DEBUG, INFO, WARNING, ERROR" << std::endl;
	}
		return 0;
}