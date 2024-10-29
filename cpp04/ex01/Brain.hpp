/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 02:30:54 by danevans          #+#    #+#             */
/*   Updated: 2024/09/27 02:30:55 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"

class Brain{
public:
	Brain(void);
	Brain(const Brain &to_copy);
	Brain &operator=(const Brain &others);
	~Brain();
	std::string ideas[100];
	int size;
};

#endif