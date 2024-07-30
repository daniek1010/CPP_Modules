#include "FragTrap.hpp"

FragTrap::FragTrap(void){}

FragTrap::FragTrap(std::string name) : ClapTrap (name){
		energyPoints = defaultEnergyPoints;
	hitPoints = defaultHitPoints;
	attackDamage = defaultAttackPoints;
	std::cout << "Parameterised sub class <FragTrap>" << std::endl;
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