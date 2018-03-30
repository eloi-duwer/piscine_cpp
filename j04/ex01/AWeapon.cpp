#include "AWeapon.hpp"
#include <iostream>
#include <string>

AWeapon::AWeapon(std::string const &name, int damage, int apCost) : 
_name(name), _damage(damage), _apCost(apCost) {

	return;

}

AWeapon::AWeapon( AWeapon const &src ) :
_name(src.getName()), _damage(src.getDamage()), _apCost(src.getAPCost()) {

	return;

}

AWeapon::~AWeapon( void ) {

	return;

}

AWeapon	&AWeapon::operator=( AWeapon &src ) {

	this->_name = src.getName();
	this->_damage = src.getDamage();
	this->_apCost = src.getAPCost();
	return *this;

}

std::string	AWeapon::getName( void ) const {

	return this->_name;

}

int		AWeapon::getAPCost( void ) const {

	return this->_apCost;

}

int		AWeapon::getDamage( void ) const {

	return this->_damage;

}
