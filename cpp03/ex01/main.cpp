#include "ScavTrap.hpp"

using std::cout;
using std::endl;

int main(void)
{
	cout << sizeof(ScavTrap) << endl;
	cout << sizeof(ClapTrap) << endl;
	ScavTrap evaluator1("Foo ");
	ScavTrap evaluator2("Bar ");

	cout << endl;

	evaluator1.attack("evaluator2");
	evaluator2.takeDamage(90);

	cout << endl;
	cout << endl;

	evaluator1.attack("evaluator2");
	evaluator2.takeDamage(1);

	cout << endl;
	cout << endl;

	evaluator1.attack("evaluator2");
	evaluator2.takeDamage(1);
	evaluator1.guardGate();

	cout << endl;

	evaluator2.beRepaired(100);

	cout << endl;

	evaluator1.attack("again");
	evaluator2.takeDamage(10);

	cout << endl;

	return 0;
}