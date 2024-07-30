#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap (name){
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "Default sub class <FragTrap>" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "Mayday Mayday! Destructor <FragTrap> called " << std::endl;
}

void	FragTrap::highFivesGuys(void){
	if (energyPoints == 0){
		std::cout << "ClapTrap enery <FragTrap> kaput " << std::endl;
		return ;
	}
	energyPoints -= 1;
	std::cout << "FragTrap " << name << "attack " <<
	"HIGH FIVE!  ahahahahaha " << std::endl;
}