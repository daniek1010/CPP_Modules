#include "Zombie.hpp"

int main(){
	int i, N;
	std::string name;
	i = 0;
	std::cout << "Enter NUMBER OF ZOOMBIE: " << std::endl;
	std::cin >> N;
	std::cout << "Enter name: " << std::endl;
	std::cin >> name;
	Zombie* hordes = zombieHorde(N, name);
	// for (int j = 0; j < N; j++){
	// 	std::cout << "Enter name: " << std::endl;
	// 	std::cin >> name[j];
	// }
	while (i < N){
		hordes[i].announce();
		i++;
	}
	delete[] hordes;
}