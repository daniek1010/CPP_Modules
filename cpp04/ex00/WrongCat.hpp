#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public:
		WrongCat(void);
		WrongCat(const WrongCat &to_copy);
		WrongCat& operator=(const WrongCat &other);
		~WrongCat();
		void makeSound() const;
};


#endif