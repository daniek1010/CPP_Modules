/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:56:41 by danevans          #+#    #+#             */
/*   Updated: 2024/09/27 01:05:31 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"


class FragTrap : virtual public ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		void	highFivesGuys(void);
};

#endif
