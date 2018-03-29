#ifndef _FIXED_HPP_
# define _FIXED_HPP_

#include <iostream>

class Fixed {

public:
	Fixed( void );
	Fixed( Fixed const &nb );

	~Fixed( void );

	int	getRawBits( void ) const;
	void	setRawBits( int const raw );

	Fixed	&operator=( Fixed const& nb );	

private:
	int			_nb;
	static const int	_binaryPoint;

};

# endif
