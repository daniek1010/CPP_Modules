/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 13:00:36 by danevans          #+#    #+#             */
/*   Updated: 2024/09/27 13:06:39 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
	std::string type;
public:
	Animal(void);
	Animal(const Animal &to_copy);
	Animal& operator=(const Animal &other);
	virtual ~Animal();
	std::string getType()const;
	void setType(std::string type);
	virtual void makeSound() const = 0;
};

#endif