#include "ClapTrap.hpp"

using std::cout;
using std::endl;

int main(void)
{
	ClapTrap evaluator1("Foo ");

	// for (int i = 0; i < 10; i++)
	// 	evaluator1.attack("Bar");
	evaluator1.attack("Bar");
	
	// for (int i = 0; i < 10; i++)
	// 	evaluator1.beRepaired(10);
	evaluator1.takeDamage(10);
	evaluator1.attack("Bar");
	evaluator1.beRepaired(10);
	
	for (int i = 0; i < 10; i++)
		evaluator1.attack("Bar");

	return 0;
}