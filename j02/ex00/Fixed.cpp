#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed( void ) : _nb(0) {

	std::cout << "Default construcor called" << std::endl;

}

Fixed::Fixed( Fixed const &nb ) : _nb(nb.getRawBits()) {

	std::cout << "Copy constructor called" << std::endl;

}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;

}

Fixed 	&Fixed::operator=( Fixed const &nb ) {

	std::cout << "Assignation operator called" << std::endl;
	this->_nb = nb.getRawBits();
	return *this;

}

int	Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->_nb;

}

void	Fixed::setRawBits( int const raw ) {

	std::cout << "setRawBits member function called" << std::endl;
	this->_nb = raw;

}

const int Fixed::_binaryPoint = 8;
