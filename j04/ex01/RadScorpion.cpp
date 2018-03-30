#include "RadScorpion.hpp"
#include "Enemy.hpp"
#include <iostream>
#include <string>

RadScorpion::RadScorpion( void ) : Enemy(80, "RadScorpion") {

	std::cout << "* click click click *" << std::endl;

}

RadScorpion::RadScorpion( RadScorpion const &src ) : Enemy(src.getHP(), src.getType()) {

	std::cout << "* click click click" << std::endl;

};

RadScorpion::~RadScorpion( void ) {
	
	return;

}

void	RadScorpion::takeDamage( int dmg ) {

	if (this->getHP() > 0) {
		Enemy::takeDamage(dmg - 3);
		if (this->getHP() == 0)
			std::cout << "* SPROTCH *" << std::endl;
	}

}
