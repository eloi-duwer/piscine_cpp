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

	Fixed	&operator=( Fixed const &rhs );	
	Fixed	operator+( Fixed const &rhs );
	Fixed	operator-( Fixed const &nb );
	Fixed	operator*( Fixed const &nb );
	Fixed	operator/( Fixed const &nb );

	bool	operator>( Fixed const &nb );
	bool	operator<( Fixed const &nb );
	bool	operator>=( Fixed const &nb );
	bool	operator<=( Fixed const &nb );
	bool	operator==( Fixed const &nb );
	bool	operator!=( Fixed const &nb );
	
	Fixed	&operator++( void );
	Fixed	operator++( int nb);
	Fixed	&operator--( void );
	Fixed	operator--( int nb);

	static	Fixed &min( Fixed &nb1, Fixed &nb2);
	static	Fixed  const &min( Fixed const &nb1, Fixed const &nb2);
	static	Fixed &max( Fixed &nb1, Fixed &nb2);
	static	Fixed const &max( Fixed const &nb1, Fixed const &nb2);
private:
	int	_nb;
	static const int _binaryPoint;

};

std::ostream &operator<<( std::ostream &o, Fixed const &nb );


# endif
