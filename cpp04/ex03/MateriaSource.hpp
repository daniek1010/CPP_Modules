/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:29:58 by danevans          #+#    #+#             */
/*   Updated: 2024/10/24 07:49:02 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"


class MateriaSource : public IMateriaSource {
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &to_copy);
		MateriaSource &operator=(const MateriaSource &others);
		~MateriaSource();
		void learnMateria(AMateria* to_copy);
		AMateria* createMateria(std::string const & type);
	private:
		AMateria* _materiaSource[4];
};

#endif