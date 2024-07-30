#include "FragTrap.hpp"

using std::cout;
using std::endl;

int main(void)
{
	cout << sizeof(FragTrap) << endl;
	cout << sizeof(ClapTrap) << endl;
	FragTrap evaluator1("Foo ");
	FragTrap evaluator2("Bar ");

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
	evaluator1.highFivesGuys();

	cout << endl;

	evaluator2.beRepaired(100);

	cout << endl;

	evaluator1.attack("again");
	evaluator2.takeDamage(10);

	cout << endl;

	return 0;
}