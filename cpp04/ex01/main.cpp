
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    const Animal* animals[10];

    for (int i = 0; i < 5; ++i) {
        animals[i] = new Dog();
    }

    for (int i = 5; i < 10; ++i) {
        animals[i] = new Cat();
    }
    
	std::cout << "\n showing that animals {cat and dog } = " << animals[4]->getType() << std::endl;
    for (int i = 0; i < 10; ++i) {
        delete animals[i];
    }
    Dog originalDog;
	Cat originalcat;
	std::cout << "===========================" << std::endl;
	originalDog.getBrain()->ideas[0] = "Chase the cat";
	originalcat.getBrain()->ideas[0] = "Go into hiding";
    std::cout << "Original Dog Idea: " << originalDog.getBrain()->ideas[0] << std::endl;
    std::cout << "Original Cat Idea: " << originalcat.getBrain()->ideas[0] << std::endl;
	std::cout << "===========================" << std::endl;
   
    Dog copiedDog = originalDog;
    Cat copiedcat = originalcat;
	std::cout << "\n===========================" << std::endl;
    std::cout << "Copied Dog Idea: " << copiedDog.getBrain()->ideas[0] << std::endl;
    std::cout << "Copied Cat Idea: " << copiedcat.getBrain()->ideas[0] << std::endl;
	// std::cout << "===========================\n" << std::endl;

	copiedDog.getBrain()->ideas[0] = "Sleep";
	copiedcat.getBrain()->ideas[0] = "Relax now";
	std::cout << "===========================" << std::endl;
	std::cout << "Original Dog Idea: " << originalDog.getBrain()->ideas[0] << std::endl;
	std::cout << "Copied Dog Idea: " << copiedDog.getBrain()->ideas[0] << std::endl;
	std::cout << "===========================" << std::endl;
	
	std::cout << "Original Cat Idea: " << originalcat.getBrain()->ideas[0] << std::endl;
	std::cout << "Copied Cat Idea: " << copiedcat.getBrain()->ideas[0] << std::endl;
	std::cout << "===========================\n" << std::endl;

	//checking by deleting obj if the copy made was shallow or deep
	Dog *temp = new Dog;
	Dog basic;
	temp->getBrain()->ideas[0] = "teseter";
	basic = *temp;
	delete temp;

	std::cout << "\n ===========================\n" << basic.getBrain()->ideas[0] << std::endl;
	for (int i = 0; i < 100; i++){
		copiedDog.getBrain()->ideas[i] = "Sleep";
	}

	std::cout << "\n\n Copied Cat Idea: " << copiedcat.getBrain()->ideas[99] << std::endl;
	
    return 0;
}

// int main()
// {
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// delete j;//should not create a leak
// delete i;

// return 0;
// }