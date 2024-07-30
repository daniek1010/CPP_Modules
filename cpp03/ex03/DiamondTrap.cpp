#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap() {
	std::cout << "Default sub class <Diamond>" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) :
ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), name(name){
	this->hitPoints = FragTrap::defaultHitPoints;
	this->energyPoints = ScavTrap::defaultEnergyPoints;
	this->attackDamage = FragTrap::defaultAttackPoints;
	std::cout << "Parameterized sub class <Diamond>" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& to_copy) : 
ClapTrap(to_copy), FragTrap(to_copy), ScavTrap(to_copy){
	*this = to_copy;
	std::cout << "Copy constructor sub class <Diamond>" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other){
	if (this != &other){
		name = other.name;
		ClapTrap::name = name + "_clap_name";
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	std::cout << "Copy assignmet operator sub class <Diamond>" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "Mayday Mayday! Destructor <Diamond> called " << std::endl;
}
 
void DiamondTrap::whoAmI(void){
	std::cout << "\nThis is:\nDiamondTrap: " << name << 
	"\nClapTrap: " << ClapTrap::name << "\n" << std::endl;
}