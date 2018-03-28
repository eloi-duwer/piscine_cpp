#include "Fixed.hpp"
#include <iostream>
#include <climits>
#include <cmath>

Fixed::Fixed( void ) : _nb(0) {

	std::cout << "Default construcor called" << std::endl;

}

Fixed::Fixed( Fixed const &nb ) : _nb(nb.getRawBits()) {

	std::cout << "Copy constructor called" << std::endl;

}

Fixed::Fixed( int const nb ) : _nb(nb) {

	this->_nb  = this->_nb << Fixed::_binaryPoint;
	std::cout << "Int constructor called" << std::endl;

}

Fixed::Fixed( float const nb ) : _nb(roundf(nb * (1 << Fixed::_binaryPoint))) {

	std::cout << "Float constructor called" << std::endl;

}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;

}

int	Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->_nb;

}

void	Fixed::setRawBits( int const raw ) {

	std::cout << "setRawBits member function called" << std::endl;
	this->_nb = raw;

}

float	Fixed::toFloat( void ) const {

	return (float)(this->_nb) / (1 << Fixed::_binaryPoint);

}

int	Fixed::toInt( void ) const {

	return this->_nb >> Fixed::_binaryPoint;

}

Fixed 	&Fixed::operator=( Fixed const &nb ) {

	std::cout << "Assignation operator called" << std::endl;
	this->_nb = nb.getRawBits();
	return *this;

}

std::ostream &operator<<( std::ostream &o, Fixed const &nb ) {

	return o << nb.toFloat();

}

const int Fixed::_binaryPoint = 8;
