/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:02:06 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/27 17:14:56 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>

ZombieHorde::ZombieHorde( int N ): _nbZombies(N){

	this->_zombies = new Zombie[N];
	std::cout << N << " zombies created" << std::endl;

}

ZombieHorde::~ZombieHorde( void ) {

	delete [] this->_zombies;
	std::cout << this->_nbZombies << " zombies deleted" << std::endl;

}

void	ZombieHorde::announce( void ) {

	int i = 0;
	while (i < this->_nbZombies) {
		this->_zombies[i].announce();
		++i;
	}

}
