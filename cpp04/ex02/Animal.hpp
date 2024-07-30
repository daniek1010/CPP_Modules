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
	virtual ~Animal() = 0;
	std::string getType()const;
	void setType(std::string type);
	virtual void makeSound() const;
};



#endif