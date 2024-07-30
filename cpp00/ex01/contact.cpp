#include <string>
#include "contact.hpp"


void Contact::setFirstName(std::string str){
	this->first_name = str;
}
void Contact::setLastName(std::string str){
	this->last_name = str;
}
void Contact::setNickName(std::string str){
	this->nick_name = str;
}
void Contact::setPhoneNumber(std::string str){
	this->phone_number = str;
}
void Contact::setDarkestSecret(std::string str){
	this->darkest_secret = str;
}

const std::string& Contact::getFirstName(){
	return first_name;
}
const std::string& Contact::getLastName(){
	return last_name;
}
const std::string& Contact::getNickName(){
	return nick_name;
}
const std::string& Contact::getPhoneNumber(){
	return phone_number;
}
const std::string& Contact::getDarkestSecret(){
	return darkest_secret;
}
