#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"
// #include "Dog.hpp"

class Brain{
public:
	Brain(void);
	Brain(const Brain &to_copy);
	Brain &operator=(const Brain &others);
	~Brain();
	std::string ideas[100];
	int size;
};

#endif