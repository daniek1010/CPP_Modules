#include "ClapTrap.hpp"

using std::cout;
using std::endl;

int main(void)
{
	ClapTrap evaluator1("Foo ");
	ClapTrap evaluator2("Bar ");

	cout << endl;

	evaluator1.attack("evaluator2");
	evaluator2.takeDamage(1000);

	cout << endl;
	cout << endl;

	evaluator1.attack("evaluator2");
	evaluator2.takeDamage(1);

	cout << endl;
	cout << endl;

	evaluator1.attack("evaluator2");
	evaluator2.takeDamage(1);

	cout << endl;

	evaluator2.beRepaired(100);

	cout << endl;

	evaluator1.attack("R");
	evaluator2.takeDamage(10);

	cout << endl;

	return 0;
}