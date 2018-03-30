#include <iostream>
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include <string>

PlasmaRifle::PlasmaRifle( void ) : AWeapon("Plasma Rifle", 21, 5) {

	return;

}

PlasmaRifle::PlasmaRifle( PlasmaRifle const &src ) :
AWeapon(src.getName(), src.getDamage(), src.getAPCost()) {

	return;

}

PlasmaRifle::~PlasmaRifle( void ) {

	return;

}

void	PlasmaRifle::attack( void ) const {

	std::cout << "* piouuu piouuu piouuu *" << std::endl;

}
