#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void){
	std::cout << "Defualt sub class <scavtrap> " << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	energyPoints = defaultEnergyPoints;
	hitPoints = defaultHitPoints;
	attackDamage = defaultAttackPoints;
	std::cout << "Parameterized sub class <scavtrap> " << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "Mayday Mayday! Destructor <scavtrap> called " << std::endl;
}

void	ScavTrap::guardGate(){
	std::cout << "ScavTrap is Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target){
	if (energyPoints == 0){
		std::cout << "ClapTrap enery kaput " << std::endl;
		return ;
	}
	energyPoints -= 1;
	std::cout << "ScavTrap <subclass>  " << name << " attack " << target <<
	"  ahahahahaha " << std::endl;

}