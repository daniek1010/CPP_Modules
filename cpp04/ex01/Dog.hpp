/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 02:31:05 by danevans          #+#    #+#             */
/*   Updated: 2024/10/25 10:09:37 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	public:
		Dog(void);
		Dog(const Dog &to_copy);
		Dog& operator=(const Dog &other);
		~Dog();
		void makeSound() const;
		Brain* getBrain() const;
	private:
		Brain* brain;
};

#endif