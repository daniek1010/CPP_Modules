#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"


class FragTrap : virtual public ClapTrap{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap();
		void	highFivesGuys(void);
		
		static const int defaultHitPoints = 100;
		static const int defaultEnergyPoints = 100;
		static const int defaultAttackPoints = 30;
};

#endif
