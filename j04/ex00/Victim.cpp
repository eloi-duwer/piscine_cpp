#include "Victim.hpp"
#include <iostream>
#include <string>

Victim::Victim( std::string const &name ) : _name(name) {

	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;

}

Victim::Victim( Victim const &src ) : _name(src.getName()) {

	std::cout << "Some random victim called " << this->_name << " has just been cloned !" << std::endl;

}

Victim::~Victim( void ) {

	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;

}

Victim	&Victim::operator=( Victim const &src ) {

	this->_name = src.getName();
	std::cout << "Victim " << this->_name << " has just been copied !" << std::endl;
	return *this;

}

std::ostream	&operator<<( std::ostream &o, Victim const &src ) {

	o << "I'm " << src.getName() << " and I like otters !" << std::endl;
	return o; 

}

void	Victim::getPolymorphed( void ) const {

	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;

}

std::string const	&Victim::getName( void ) const {

	return this->_name;

}
