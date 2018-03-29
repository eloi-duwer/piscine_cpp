#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed(-0.5f) << std::endl;
	std::cout << Fixed(-4.2f) * Fixed(-10) << std::endl;
	std::cout << Fixed(-4.2f) * Fixed(10) << std::endl;
	Fixed c;
	std::cout << c.operator++(1) << std::endl;
	std::cout << c << std::endl;
	return 0;
}
