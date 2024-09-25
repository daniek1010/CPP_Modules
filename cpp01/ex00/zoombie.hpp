/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoombie.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:54:46 by danevans          #+#    #+#             */
/*   Updated: 2024/09/23 21:54:48 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOOMBIE_HPP
# define ZOOMIE_HPP

#include <string>
#include <iostream>

class Zoombie{
	public:
		Zoombie();
		~Zoombie();
		void				setName(std::string name);
		const std::string&	getName(void);
		void 				announce(void);
	private: 
		std::string name;
};

Zoombie* newZombie( std::string name );

void randomChump( std::string name );

#endif