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