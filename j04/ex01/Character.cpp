#include "Character.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <string>
#include <iostream>
#include <string>

Character::Character( std::string const &name ) : _weapon(NULL), _name(name), _ap(40) {

	return;

}

Character::Character ( Character &src ) {

	this->_name = src.getName();
	this->_ap = src.getAP();
	this->_weapon = src.getWeapon();

}

Character::~Character( void ) {

	return;

}

Character	&Character::operator=(Character &src) {

	this->_name = src.getName();
	this->_ap = src.getAP();
	this->_weapon = src.getWeapon();
	return *this;

}

static int min(int a, int b) {
	if (a < b)
		return a;
	return b;
}

static int max(int a, int b) {
	if (a > b)
		return a;
	return b;
}

void	Character::recoverAP( void ) {

	this->_ap = min(40, this->_ap + 10);

}

void	Character::equip( AWeapon *weapon) {

	this->_weapon = weapon;

}

std::string	Character::getName( void ) const {

	return this->_name;

}

int		Character::getAP( void ) const {

	return this->_ap;

}

AWeapon 	*Character::getWeapon( void ) const {

	return this->_weapon;

}

void	Character::attack( Enemy *enemy) {
	if (this->_weapon != NULL && this->_ap > 0 && enemy != NULL) {
		std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
		this->_weapon->attack();
		enemy->takeDamage(this->_weapon->getDamage());
		this->_ap = max(0, this->_ap - this->_weapon->getAPCost());
		if (enemy->getHP() <= 0) {
			delete enemy;
			enemy = NULL;
		}
	}
}

std::ostream	&operator<<(std::ostream &o, Character &character) {

	o << character.getName() << " has " << character.getAP() << " AP and";
	if(character.getWeapon() != NULL)
		o << " wields a " << character.getWeapon()->getName();
	else
		o << " is unarmed";
	o << std::endl;
	return o;

}
