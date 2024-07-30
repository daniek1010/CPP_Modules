#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

// int main (){
// 	std::string name, weapon;
// 	std::cout << "Enter weapon name: ";
// 	std::cin >> weapon;
// 	Weapon club = Weapon(weapon);
// 	std::cout << "Enter name: ";
// 	std::cin >> name;

// 	HumanA human(name, club);
// 	human.attack();
// 	club.setType("fucling bomb");
// 	human.attack();

// 	HumanB human2(name);
// 	human2.setWeapon(club);
// 	human2.attack();
// 	club.setType("fucling bomb");
// 	human.attack();
// }


int main () {
{
Weapon club = Weapon("crude spiked club");
HumanA bob("Bob", club);
bob.attack();
club.setType("some other type of club");
bob.attack();
}{
Weapon club = Weapon("crude spiked club");
HumanB jim("Jim");
jim.setWeapon(club);
jim.attack();
club.setType("some other type of club");
jim.attack();
}
return 0;

}