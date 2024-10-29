#include "FragTrap.hpp"

using std::cout;
using std::endl;

int main(void)
{
	FragTrap evaluator1("Bar ");

	evaluator1.attack("evaluator2");
	evaluator1.takeDamage(90);

	evaluator1.attack("evaluator2");
	evaluator1.takeDamage(100);

	cout << endl;

		// for (int i = 0; i < 10; i++)
	// 	evaluator1.attack("Bar");
	// evaluator1.attack("Bar");
	
	// evaluator1.guardGate();
	// cout << endl;
	// for (int i = 0; i < 10; i++)
	// 	evaluator1.beRepaired(10);
	// evaluator1.takeDamage(10);
	// evaluator1.attack("Bar");
	// evaluator1.attack("another_bar");
	// evaluator1.beRepaired(10);
	
	// for (int i = 0; i < 10; i++)
	// 	evaluator1.attack("Bar");
	evaluator1.highFivesGuys();

	return 0;
}