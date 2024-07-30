#include "Cat.hpp"

Cat::Cat(void) : Animal (){
	type = ("Cat");
	brain = new Brain();
	std::cout << "<CAT> Default constructor called " << std::endl;
}

Cat::Cat(const Cat &to_copy) : Animal(to_copy){
	brain = new Brain(*to_copy.brain);
	type = to_copy.type;
	std::cout << "<CAT> Copy constructor called " << std::endl;
}

Cat& Cat::operator=(const Cat &other) {
	if (this != &other){
		type = other.type;
		delete brain;
		brain = new Brain(*other.brain);

	}
	std::cout << "<CAT> Copy assignment constructor called " << std::endl;
	return *this;
}

Cat::~Cat(){
	delete brain;
	std::cout << "<CAT> Destructor called " << std::endl;
}

Brain* Cat::getBrain() const {
        return brain;
    }

void Cat::makeSound() const{
	std::cout << "<CAT> meow meow sound called " << std::endl;
}