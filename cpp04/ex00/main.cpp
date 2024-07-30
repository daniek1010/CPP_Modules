#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

// int main (){
// 	// Animal test
// 	Dog test1;
// 	WrongCat wrong_cat;

// 	Animal *test = new Cat();
// 	Animal& test_animal = test1;
// 	WrongAnimal& fake_cat = wrong_cat;
// 	WrongAnimal *fake = new WrongCat();
// 	test->makeSound();
// 	test_animal.makeSound();
// 	fake_cat.makeSound();
// 	fake->makeSound();

// 	std::cout << test->getType() << std::endl;
// 	std::cout << test_animal.getType() << std::endl;
// 	std::cout << "\n" << std::endl;
// 	std::cout << fake_cat.getType() << std::endl;
// 	std::cout << "\n" << std::endl;
// 	std::cout << fake->getType() << std::endl;


// 	delete test;
// 	delete fake;
	
// }

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\nAnimal testing" << std::endl;
	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;

	std::cout << "\nWrong Animal testing\n" << std::endl;
	WrongAnimal	*wrongAnimal = new WrongAnimal;
	WrongAnimal	*wrongCat = new WrongCat;

	std::cout << "\nWrongAnimal: ";
	wrongAnimal->makeSound();
	std::cout << "WrongCat: ";
	wrongCat->makeSound();
	std::cout << std::endl;
	delete wrongAnimal;
	delete wrongCat;
}