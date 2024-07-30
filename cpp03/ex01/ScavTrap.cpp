#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	setenergyPoints(50);
	sethitPoints(100);
	setattackdammagePoints(20);
	std::cout << "Default sub class <scavtrap>" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "Mayday Mayday! Destructor <scavtrap> called " << std::endl;
}

void	ScavTrap::guardGate(){
	std::cout << "ScavTrap is Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target){
	int points = getenergyPoints();
	if (points == 0){
		std::cout << "ClapTrap enery kaput " << std::endl;
		return ;
	}
	points -= 1;
	setenergyPoints(points);
	std::cout << "ScavTrap <subclass>" << getname() << "attack " << target <<
	"  ahahahahaha " << std::endl;

}