/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:23:31 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/27 17:21:29 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

ZombieHorde *createHorde(int n) {

	ZombieHorde *zomb = new ZombieHorde(n);
	return zomb;

}

int main() {

	std::srand(std::time(NULL));
	ZombieHorde zombies(5);
	zombies.announce();
	ZombieHorde *moreZombies = createHorde(3);
	moreZombies->announce();
	delete moreZombies;
	return 0;

}
