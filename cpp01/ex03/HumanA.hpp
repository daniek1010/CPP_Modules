#ifndef Human_A_HPP
#define Human_A_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA{
	public:
		HumanA(const std::string& name, Weapon& weapon);
		void attack();
	private:
		std::string name;
		Weapon& weapon;
};

#endif