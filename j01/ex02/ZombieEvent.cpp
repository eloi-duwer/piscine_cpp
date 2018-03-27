/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:02:06 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/27 16:30:08 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <istream>
#include <ctime>
#include <cstdlib>

ZombieEvent::ZombieEvent( void ): _type(std::string("none")) {

	std::srand(std::time(NULL));
	std::cout << "ZombieEvent instance created" << std::endl;

}

ZombieEvent::~ZombieEvent( void ) {

	std::cout << "ZombieEvent instance detroyed" << std::endl;

}

void	ZombieEvent::setZombieType( std::string name ) {

	this->_type = name;
	std::cout << "Zombie type set to " << name << std::endl;

}

Zombie	*ZombieEvent::newZombie(std::string name) const {
	Zombie *zomb = new Zombie(name, this->_type);
	return zomb;
}

void	ZombieEvent::randomChump( int nb_letters ) const {

	std::string name("");
	char	letter;
	int		nb;

	if (nb_letters <= 0)
		return;
	while (nb_letters > 0) {
		nb = (int)(((float)std::rand() / (float)RAND_MAX) * 25);
		letter = nb + 97;
		name += letter;
		--nb_letters;
	}
	Zombie randomZomb = Zombie(name, this->_type);
	randomZomb.announce();
}
