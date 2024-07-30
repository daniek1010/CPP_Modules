#include <string>
#include <iostream>
#include <cctype>
#include <iomanip>
#include <cstdlib>  
#include "contact.hpp"

#define MAX_CONTACT 8
class PhoneBook {
	public:
		PhoneBook() : count(0), index(0) {};
		void	add_contact();
		void	search_pb();
	private:
		Contact contacts[MAX_CONTACT];
		int count;
		int index;

};