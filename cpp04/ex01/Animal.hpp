#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
// #include "Brain.hpp"


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
	virtual void makeSound() const;
};

// Animal::Animal(/* argrotected{
// }

// Animal::~Animal()
// {
// }


#endif