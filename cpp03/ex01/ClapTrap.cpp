#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) 
: name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	hitPoints = 10;
	std::cout << "Parameterized Default constructor " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &to_copy){
	name = to_copy.name;
	energyPoints = to_copy.energyPoints;
	attackDamage = to_copy.attackDamage;
	hitPoints = to_copy.hitPoints;
	std::cout << "Copy assignment called " << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other){
	if (this != &other){
		name = other.name;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
		hitPoints = other.hitPoints;
	}
	std::cout << "Copy assignmemnt operator called " << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string& target){
	if (energyPoints == 0){
		std::cout << "ClapTrap enery kaput " << std::endl;
		return ;
	}
	energyPoints -= 1;
	std::cout << "ClapTrap " << name << "attack " << target <<
	"  ahahahahaha " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (hitPoints < amount || energyPoints == 0){
		std::cout << "ClapTap " << name << "doesn't exist " << std::endl;
		hitPoints = 0;
		return ;
	}
	hitPoints -= amount;
	std::cout << "ClapTap " << name << "got damaged with " << amount << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount){
	if (energyPoints == 0){
		std::cout << "ClapTrap energy kaput " << std::endl;
		return ;
	}
	hitPoints += amount;
	energyPoints -= 1;
	std::cout << "ClapTrap " << name << "has been repaired and gained " << amount << std::endl;
}

void ClapTrap::sethitPoints(unsigned int hitPoints){
	this->hitPoints = hitPoints;
}

void ClapTrap::setenergyPoints(unsigned int energyPoints){
	this->energyPoints = energyPoints;
}

void ClapTrap::setattackdammagePoints(unsigned int attackDamage){
	this->attackDamage = attackDamage;
}

int	 ClapTrap::getenergyPoints(){
	return (energyPoints);
}

const std::string& ClapTrap::getname(){
	return name;
}

ClapTrap::~ClapTrap(){
	std::cout << "Mayday Mayday! Destructor called " << std::endl;
}