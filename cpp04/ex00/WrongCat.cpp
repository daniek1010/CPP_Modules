#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal (){
	type = ("WrongCat");
	std::cout << "<WRONGCAT> Default constructor called " << std::endl;
}

WrongCat::WrongCat(const WrongCat &to_copy) : WrongAnimal(){
	std::cout << "<WRONGCAT> Copy constructor called " << std::endl;
	type = to_copy.type;
}

WrongCat& WrongCat::operator=(const WrongCat &other) {
	std::cout << "<WRONGCAT> Copy assignment constructor called " << std::endl;
	if (this != &other){
		type = other.type;
	}
	return *this;
}

WrongCat::~WrongCat(){
	std::cout << "<WRONGCAT> Destructor called " << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "<WRONGCAT> meow meow sound called but does it sound?? " << std::endl;
}