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