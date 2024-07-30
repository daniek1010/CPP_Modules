#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


class DiamondTrap : public FragTrap, public ScavTrap{
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap& to_copy);
		DiamondTrap &operator=(const DiamondTrap& other);
		void whoAmI(void);
		using ScavTrap::attack;
	private :
		std::string name;
};

#endif
