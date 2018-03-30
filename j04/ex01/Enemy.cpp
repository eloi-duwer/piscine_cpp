#include <string>
#include <iostream>
#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type) {

	return;

}

Enemy::Enemy( Enemy const &src ) : _hp(src.getHP()), _type(src.getType()) {

	return;

}

Enemy::~Enemy( void ) {

	return;

}

std::string	Enemy::getType( void ) const {

	return this->_type;

}

int		Enemy::getHP( void ) const {

	return this->_hp;

}

static int 	max(int a, int b) {
	if (a > b)
		return a;
	return b;
}

void		Enemy::takeDamage ( int dmg ) {

	if (this->_hp > 0) {
		this->_hp = max( 0, this->_hp - dmg );
	}

}

Enemy	&Enemy::operator=( Enemy const &src ) {

	this->_hp = src.getHP();
	this->_type = src.getType();
	return *this;
}
