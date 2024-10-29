/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 13:00:22 by danevans          #+#    #+#             */
/*   Updated: 2024/10/25 11:33:21 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	// Animal test;
    Animal* animals[10];
   Cat cats;
   Dog dogs;
   
	std::cout << "\n static created\n " << std::endl;
    for (int i = 0; i < 5; ++i) {
        animals[i] = &dogs;
		animals[i]->makeSound();
    }
    for (int i = 5; i < 10; ++i) {
        animals[i] = &cats;
		animals[i]->makeSound();
    }
	std::cout << "\n dynamcially creating\n " << std::endl;
	Cat *catss = new Cat();
	Dog *dogss = new Dog();
	std::cout << "\n assigning started\n " << std::endl;
   for (int i = 0; i < 5; ++i) {
        animals[i] = dogss;
		animals[i]->makeSound();
    }
    for (int i = 5; i < 10; ++i) {
        animals[i] = catss;
		animals[i]->makeSound();   
	}
	
	delete catss;
	delete dogss;

	const Animal* heap_animals[10];
	for (int i = 0; i < 5; i++){
		heap_animals[i] = new Dog;
		heap_animals[i]->makeSound();
	}
	for (int i = 5; i < 10; i++){
		heap_animals[i] = new Cat;
		heap_animals[i]->makeSound();
	}
	std::cout << "\n deleting created obj\n " << std::endl;
    for (int i = 0; i < 10; i++) {
        delete heap_animals[i];
    }

	// Animal good;
    // Dog originalDog;
	// Cat originalcat;
	// std::cout << "===========================\n" << std::endl;
	// originalDog.getBrain()->ideas[0] = "Chase the cat";
	// originalcat.getBrain()->ideas[0] = "Go into hiding";
    // std::cout << "Original Dog Idea: " << originalDog.getBrain()->ideas[0] << std::endl;
    // std::cout << "Original Cat Idea: " << originalcat.getBrain()->ideas[0] << std::endl;
	// std::cout << "===========================\n" << std::endl;
   
    // Dog copiedDog = originalDog;
    // Cat copiedcat = originalcat;
	// std::cout << "===========================\n" << std::endl;
    // std::cout << "Copied Dog Idea: " << copiedDog.getBrain()->ideas[0] << std::endl;
    // std::cout << "Copied Cat Idea: " << copiedcat.getBrain()->ideas[0] << std::endl;
	// // std::cout << "===========================\n" << std::endl;

	// copiedDog.getBrain()->ideas[0] = "Sleep";
	// copiedcat.getBrain()->ideas[0] = "Relax now";
	// std::cout << "===========================\n" << std::endl;
	// std::cout << "Original Dog Idea: " << originalDog.getBrain()->ideas[0] << std::endl;
	// std::cout << "Copied Dog Idea: " << copiedDog.getBrain()->ideas[0] << std::endl;
	// std::cout << "===========================\n" << std::endl;
	
	// std::cout << "Original Cat Idea: " << originalcat.getBrain()->ideas[0] << std::endl;
	// std::cout << "Copied Cat Idea: " << copiedcat.getBrain()->ideas[0] << std::endl;
	
    return 0;
}
