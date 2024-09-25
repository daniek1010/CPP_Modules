/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:55:53 by danevans          #+#    #+#             */
/*   Updated: 2024/09/25 10:17:36 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

// int main (){
// 	std::string name, weapon;
// 	std::cout << "Enter weapon name: ";
// 	std::cin >> weapon;
// 	Weapon club (weapon);
// 	std::cout << "Enter name: ";
// 	std::cin >> name;

// 	HumanA human(name, club);
// 	human.attack();
// 	club.setType("fucking bomb");
// 	human.attack();

// 	HumanB human2(name);
// 	human2.setWeapon(club);
// 	human2.attack();
// 	club.setType("fucking bomb");
// 	human2.attack();

// 	HumanB human3("ebun");
// 	human3.attack();
// 	club.setType("fucking bomb");
// 	human3.setWeapon(club);
// 	human3.attack();
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