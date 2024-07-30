#include <cstdlib>
#include <iostream>
#include "DiamondTrap.hpp"

using std::cout;
using std::endl;

int main(void)
{
    DiamondTrap Diamond("Bozo");
	Diamond.attack("bozo");
	Diamond.whoAmI();

	Diamond.attack("Pirates");
	Diamond.attack("Kings");
	Diamond.attack("Lions");
	Diamond.beRepaired(10);
	Diamond.takeDamage(100);
	Diamond.guardGate();
	Diamond.highFivesGuys();
	Diamond.whoAmI();
    return 0;
}