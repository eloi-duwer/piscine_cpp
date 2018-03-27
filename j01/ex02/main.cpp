/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:23:31 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/27 16:49:17 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

int main() {

	ZombieEvent zombies;
	zombies.randomChump(4);
	zombies.setZombieType(std::string("Walker"));
	Zombie *alan = zombies.newZombie(std::string("Alan"));
	alan->announce();
	zombies.randomChump(5);
	zombies.randomChump(8);
	delete alan;
}
