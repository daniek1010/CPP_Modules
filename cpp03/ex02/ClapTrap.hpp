# ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{
protected:
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &to_copy);
	ClapTrap &operator=(const ClapTrap &other);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void sethitPoints(unsigned int hitPoints);
	void setenergyPoints(unsigned int energyPoints);
	void setattackdammagePoints(unsigned int attackDamage);
	int	 getenergyPoints();
	const std::string& getname();
};





#endif