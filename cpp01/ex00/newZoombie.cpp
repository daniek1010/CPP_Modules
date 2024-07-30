#include "zoombie.hpp"

Zoombie* newZombie( std::string name ){
	Zoombie* z;
	z = new Zoombie();
	z->setName(name);
	return z;
}
