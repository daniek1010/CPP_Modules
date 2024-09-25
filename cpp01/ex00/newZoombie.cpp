/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZoombie.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:54:31 by danevans          #+#    #+#             */
/*   Updated: 2024/09/25 08:34:36 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zoombie.hpp"

Zoombie* newZombie( std::string name ){
	Zoombie* zom;
	zom = new Zoombie();
	zom->setName(name);
	return zom;
}
