#include "Brain.hpp"

Brain::Brain(){
	std::cout << "<BRAIN> Defualt constructor called " << std::endl;
}

Brain::Brain(const Brain &to_copy){
	*this = to_copy;
	std::cout << "<BRAIN> Copy constructor called " << std::endl;
}

Brain& Brain::operator=(const Brain &other){
	if (this != &other){
		for (int i = 0; i < 100; i++){
			this->ideas[i] = other.ideas[i];
		}
	}
	std::cout << "<BRAIN> Copy assignment constructor called " << std::endl;
	return *this;
}

Brain::~Brain(){
	std::cout << "<BRAIN> Destructor called " << std::endl;
}