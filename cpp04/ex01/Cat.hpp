/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 02:30:59 by danevans          #+#    #+#             */
/*   Updated: 2024/09/27 02:31:00 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Cat : public Animal{
	public:
		Cat(void);
		Cat(const Cat &to_copy);
		Cat& operator=(const Cat &other);
		~Cat();
		void makeSound() const;
		Brain* getBrain() const;
	private:
		Brain* brain;
};


#endif