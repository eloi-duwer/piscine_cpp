/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 13:28:09 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/29 14:05:03 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void ) {

	FragTrap robot("Robot");
	FragTrap test(robot);
	FragTrap nothing;

	test.takeDamage(100);
	test.beRepaired(50);
	test.vaulthunter_dot_exe("an ally");
	robot.meleeAttack("the other guy");
	test.takeDamage(30);
	nothing.takeDamage(150);
	nothing.beRepaired(400);
	nothing.vaulthunter_dot_exe("nobody");
	nothing.vaulthunter_dot_exe("himself");
	nothing = robot;
	nothing.vaulthunter_dot_exe("The robot");
	nothing.vaulthunter_dot_exe("The robot");
	nothing.vaulthunter_dot_exe("The robot");
	return 0;
}
