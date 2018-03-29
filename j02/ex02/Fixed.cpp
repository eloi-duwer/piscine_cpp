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

Fixed	Fixed::operator+( Fixed const &nb ) {

	Fixed ret;
	ret.setRawBits(this->_nb + nb.getRawBits());
	return ret;

}

Fixed	Fixed::operator-( Fixed const &nb ) {

	Fixed ret;
	ret.setRawBits(this->_nb - nb.getRawBits());
	return ret;

}

Fixed	Fixed::operator*( Fixed const &nb ) {

	return Fixed(this->toFloat() * nb.toFloat());

}

Fixed	Fixed::operator/( Fixed const &nb ) {

	return Fixed(this->toFloat() / nb.toFloat());

}

bool	Fixed::operator>( Fixed const &nb ) {

	return this->_nb > nb.getRawBits();

}

bool	Fixed::operator<( Fixed const &nb ) {

	return this->_nb < nb.getRawBits();

}


bool	Fixed::operator>=( Fixed const &nb ) {

	return this->_nb >= nb.getRawBits();

}


bool	Fixed::operator<=( Fixed const &nb ) {

	return this->_nb <= nb.getRawBits();

}


bool	Fixed::operator==( Fixed const &nb ) {

	return this->_nb == nb.getRawBits();

}


bool	Fixed::operator!=( Fixed const &nb ) {

	return this->_nb != nb.getRawBits();

}

Fixed	&Fixed::operator++( void ) {

	this->_nb += 1;
	return *this;
}

Fixed	Fixed::operator++( int nb ) {

	Fixed res = *this;

	if (nb == 0)	
		this->_nb += 1;
	else
		this->_nb += nb;
	return res;

}

Fixed	&Fixed::operator--( void ) {

	this->_nb -= 1;
	return *this;
}

Fixed	Fixed::operator--( int nb ) {

	Fixed res = *this;

	if (nb == 0)	
		this->_nb -= 1;
	else
		this->_nb -= nb;
	return res;

}

Fixed	&Fixed::min( Fixed &nb1, Fixed &nb2 ) {

	if (nb1 < nb2)
		return nb1;
	return nb2;

}

Fixed	const &Fixed::min( Fixed const &nb1, Fixed const &nb2 ) {

	if (nb1.getRawBits() < nb2.getRawBits())
		return nb1;
	return nb2;

}


Fixed	&Fixed::max( Fixed &nb1, Fixed &nb2 ) {

	if (nb1 > nb2)
		return nb1;
	return nb2;

}


Fixed	const &Fixed::max( Fixed const &nb1, Fixed const &nb2 ) {

	if (nb1.getRawBits() > nb2.getRawBits())
		return nb1;
	return nb2;

}



std::ostream &operator<<( std::ostream &o, Fixed const &nb ) {

	return o << nb.toFloat();

}

const int Fixed::_binaryPoint = 8;
