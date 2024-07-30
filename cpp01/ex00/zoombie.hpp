#ifndef ZOOMBIE_HPP
# define ZOOMIE_HPP

#include <string>
#include <iostream>

class Zoombie{
	public:
		Zoombie();
		~Zoombie();
		void				setName(std::string name);
		const std::string&	getName(void);
		void 				announce(void);
	private: 
		std::string name;
};

Zoombie* newZombie( std::string name );

void randomChump( std::string name );

#endif