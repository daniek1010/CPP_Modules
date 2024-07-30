#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal (){
	type = ("WrongCat");
	std::cout << "<WRONGCAT> Default constructor called " << std::endl;
}

WrongCat::WrongCat(const WrongCat &to_copy) : WrongAnimal(){
	*this = to_copy;
	std::cout << "<WRONGCAT> Copy constructor called " << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other) {
	if (this != &other){
		type = other.type;
	}
	std::cout << "<WRONGCAT> Copy assignment constructor called " << std::endl;
	return *this;
}

WrongCat::~WrongCat(){
	std::cout << "<WRONGCAT> Destructor called " << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "<WRONGCAT> meow meow sound called " << std::endl;
}