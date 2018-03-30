#include "SuperMutant.hpp"
#include "Enemy.hpp"
#include <iostream>
#include <string>

SuperMutant::SuperMutant( void ) : Enemy(170, "Super Mutant") {

	std::cout << "Gaaah. Me want smash heads !" << std::endl;

}

SuperMutant::SuperMutant( SuperMutant const &src ) : Enemy(src.getHP(), src.getType()) {

	std::cout << "Gaaah. Me want smash heads !" << std::endl;

};

SuperMutant::~SuperMutant( void ) {
	
	return;

}

void	SuperMutant::takeDamage( int dmg ) {

	if (this->getHP() > 0) {
		Enemy::takeDamage(dmg - 3);
		if (this->getHP() == 0)
			std::cout << "Aaargh ..." << std::endl;
	}

}
