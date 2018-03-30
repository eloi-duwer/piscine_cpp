/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 13:28:09 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/30 22:30:08 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main( void ) {

	ScavTrap	robot("Robot");
	ScavTrap	test(robot);
	FragTrap	player;
	ClapTrap	clap;
	NinjaTrap	ninja;
	NinjaTrap	neo("Neo");

	ClapTrap	*bug = new NinjaTrap("jean-eudes");

	ninja.ninjaShoebox(robot);
	ninja.ninjaShoebox(player);
	neo.ninjaShoebox(ninja);
	neo.ninjaShoebox(clap);

	neo.ninjaShoebox(*bug);

	return 0;
}
