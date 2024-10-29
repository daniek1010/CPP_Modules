#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

// int main()
// {
// IMateriaSource* src = new MateriaSource();
// src->learnMateria(new Ice());
// src->learnMateria(new Cure());
// ICharacter* me = new Character("me");
// AMateria* tmp;
// tmp = src->createMateria("ice");
// me->equip(tmp);
// tmp = src->createMateria("cure");
// me->equip(tmp);
// ICharacter* bob = new Character("bob");
// me->use(0, *bob);
// me->use(1, *bob);
// delete bob;
// delete me;
// delete src;
// return 0;
// }

int main()
{
IMateriaSource* src = new MateriaSource(); // create mutiple source and see if they overwrite each other in the creation stage
std::cout << "******* Learning how to use ice but not cure ******" << std::endl;
src->learnMateria(new Ice());
ICharacter* me = new Character("me");
AMateria* tmp;

tmp = src->createMateria("ice");
std::cout << "let's equip and go outta range " << std::endl;
for (int i = 0; i < 100; i++){
	me->equip(tmp);
}
std::cout << "****** Creation sucessful ********" << std::endl;
ICharacter* bob = new Character("bob");
std::cout << "*** ICE: this should print only 4x ***" << std::endl;
for (int i = 0; i < 100; i++){
	me->use(i, *bob);
}
std::cout << "\n now lets unequip " << std::endl;
for (int i = 0; i < 100; i++){
	me->unequip(i);
}
std::cout << "\n has nothing to use when calling equip and hasnt learnt how to heal " << std::endl;
for (int i = 0; i < 10; i++){
	me->use(i, *bob);
}
tmp = src->createMateria("ice");
for (int i = 0; i < 100; i++){
	me->equip(tmp);
}
for (int i = 0; i < 10; i++){
	me->use(i, *bob);
}
// std::cout << "\n TRAINING HOW TO CURE " << std::endl;
// src->learnMateria(new Cure());
// std::cout << "\n now lets unquip the to have some storage and go outta range " << std::endl;
// for (int i = 0; i < 100; i++){
// 	me->unequip(i);
// }
// std::cout << "\n unequip sucessful and now lets heal " << std::endl;
// tmp = src->createMateria("cure");
// std::cout << "*** CURE: this should print only 4x ***" << std::endl;
// for (int i = 0; i < 100; i++){
// 	me->equip(tmp);
// 	me->use(i, *bob);
// }
// std::cout << " \n deleting allocated memory " << std::endl;
delete bob;
delete me;
delete src;
return 0;
}