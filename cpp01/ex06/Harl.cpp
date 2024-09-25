/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:56:33 by danevans          #+#    #+#             */
/*   Updated: 2024/09/25 12:30:34 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#define DEBUG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
#define INFO "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
#define WARNING "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
#define ERROR	"This is unacceptable! I want to speak to the manager now." 

void	Harl::debug( void ){
	std::cout << "[DEBUG]" << std::endl;
	std::cout << DEBUG << std::endl;
}

void	Harl::info( void ){
	std::cout << "[INFO]" << std::endl;
	std::cout << INFO << std::endl;
}
void	Harl::warning( void ){
	std::cout << "[WARNING]" << std::endl;
	std::cout << WARNING << std::endl;
}
void	Harl::error( void ){
	std::cout << "[ERROR]" << std::endl;
	std::cout << ERROR << std::endl;
}

void	Harl::complain( std::string level ){
	funcPtr myfuncPtrs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string level_complains[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (size_t i = 0; i < level_complains->size(); i++){
		if (level == level_complains[i]){
			
			switch (i){
				case 0:
					(this->*myfuncPtrs[0])();
					(this->*myfuncPtrs[1])();
					(this->*myfuncPtrs[2])();
					(this->*myfuncPtrs[3])();
					break;
				case 1:
					(this->*myfuncPtrs[1])();
					(this->*myfuncPtrs[2])();
					(this->*myfuncPtrs[3])();
					break;
				case 2:
					(this->*myfuncPtrs[2])();
					(this->*myfuncPtrs[3])();
					break;
				case 3:
					(this->*myfuncPtrs[3])();
					break;
				default:
					break;
				}
		return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

