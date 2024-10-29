/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 00:13:52 by danevans          #+#    #+#             */
/*   Updated: 2024/10/24 08:42:51 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
public:
    Cure(void);
	Cure(const Cure &to_copy);
	Cure &operator=(const Cure &other);
    ~Cure();
	AMateria* clone() const;
	virtual void use(ICharacter& target);
};
#endif