/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 00:35:02 by danevans          #+#    #+#             */
/*   Updated: 2024/10/24 08:43:29 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
public:
    Ice(void);
	Ice(const Ice &to_copy);
	Ice &operator=(const Ice &other);
    ~Ice();
	AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
