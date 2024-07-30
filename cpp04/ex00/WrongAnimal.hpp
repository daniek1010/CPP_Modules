#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>
#include <string>


class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &to_copy);
	WrongAnimal& operator=(const WrongAnimal &other);
	virtual ~WrongAnimal();
	std::string getType()const;
	void setType(std::string type);
	virtual void makeSound() const;
};


#endif