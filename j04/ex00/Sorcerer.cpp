#include <iostream>
#include <string>
#include "Sorcerer.hpp"

Sorcerer::Sorcerer( std::string const &name, std::string const &title ) : _name(name), _title(title) {

	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;

}

Sorcerer::Sorcerer( Sorcerer const &src ) : _name(src.getName()), _title(src.getTitle()) {

	std::cout << this->_name << ", " << this->_title << ", has been cloned!" << std::endl;

}

Sorcerer::~Sorcerer( void ) {

	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;

}

Sorcerer	&Sorcerer::operator=(Sorcerer const &src) {

	this->_name = src.getName();
	this->_title = src.getTitle();
	std::cout << this->_name << ", " << this->_title << " has been copied !" << std::endl;
	return *this;

}

std::string	const &Sorcerer::getName( void ) const {

	return this->_name;

}

std::string	const &Sorcerer::getTitle( void ) const {

	return this->_title;

}

void		Sorcerer::polymorph( Victim const &victim ) const {

	victim.getPolymorphed();

}

std::ostream	&operator<<( std::ostream &o, Sorcerer &sorcerer ) {

	o << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies !" << std::endl;
	return o;

}
