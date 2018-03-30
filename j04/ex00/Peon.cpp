#include "Peon.hpp"
#include "Victim.hpp"
#include <iostream>
#include <string>

Peon::Peon( std::string const &name ) : Victim(name) {

	std::cout << "Zog zog." << std::endl;

}

Peon::Peon( Peon const &src ) : Victim(src.getName()) {

	std::cout << "Zog zog." << std::endl;

}

Peon::~Peon( void ) {

	std::cout << "Bleuark..." << std::endl;

}

void	Peon::getPolymorphed( void ) const {

	std::cout << this->_name << " has been truned into a pink pony!" << std::endl;

}

Peon	&Peon::operator=( Peon const &src ) {

	this->_name = src.getName();
	std::cout << "Peon " << this->_name << " has been copied !" << std::endl;
	return *this;

}
