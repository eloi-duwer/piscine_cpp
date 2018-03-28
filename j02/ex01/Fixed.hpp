#ifndef _FIXED_HPP_
# define _FIXED_HPP_

#include <iostream>

class Fixed {

public:
	Fixed( void );
	Fixed( Fixed const &nb );
	Fixed( int const nb );
	Fixed( float const nb );

	~Fixed( void );

	int	getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int	toInt( void ) const;

	Fixed	&operator=( Fixed const& nb );	

private:
	int	_nb;
	static const int _binaryPoint;

};

std::ostream &operator<<( std::ostream &o, Fixed const &nb );

# endif
