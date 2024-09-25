/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:54:35 by danevans          #+#    #+#             */
/*   Updated: 2024/09/23 21:54:36 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zoombie.hpp"

void randomChump( std::string name ){
	Zoombie zoombie;
	zoombie.setName(name);
	zoombie.announce();
}