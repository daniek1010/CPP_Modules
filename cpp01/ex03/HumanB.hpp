#ifndef Human_B_HPP
#define Human_B_HPP

#include "Weapon.hpp"

class HumanB{
	public:
		HumanB(std::string name);
		void setWeapon(Weapon& weapon);
		void attack();
	private:
		std::string name;
		Weapon* weapon;

};

#endif