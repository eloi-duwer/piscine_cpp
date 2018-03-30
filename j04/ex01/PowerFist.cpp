#include <iostream>
#include "AWeapon.hpp"
#include "PowerFist.hpp"
#include <string>

PowerFist::PowerFist( void ) : AWeapon("Power Fist", 50, 8) {

	return;

}

PowerFist::PowerFist( PowerFist const &src ) :
AWeapon(src.getName(), src.getDamage(), src.getAPCost()) {

	return;

}

PowerFist::~PowerFist( void ) {

	return;

}

void	PowerFist::attack( void ) const {

	std::cout << "* pschhh... SBAM! *" << std::endl;

}
