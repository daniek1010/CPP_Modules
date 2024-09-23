#include <string>
#include <cstring> 
#include <iostream>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <limits>
#include "contact.hpp"

#define MAX_CONTACT 2
class PhoneBook {
	public:
		PhoneBook() : count(0), index(0) {};
		void	add_contact();
		void	search_pb();
		Contact contacts[MAX_CONTACT];
		int count;
		int index;

};

bool				add_infos(const std::string &str, std::string &input);
void 				print_contact(Contact contact);
const std::string	truncat_10(std::string str);
bool				allDigit(std::string input);
void				displayWelcome(void);
bool				getInput(std::string &input);