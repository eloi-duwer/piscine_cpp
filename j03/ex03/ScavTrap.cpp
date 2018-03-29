/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 10:57:50 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/29 14:04:11 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name, 100, 100, 1, 20, 15, 3, 50, 50) {

	std::cout << "Start ScavTrap bootup sequence. Designation: " << this->_name << std::endl;
	std::srand(std::time(NULL));

}

ScavTrap::ScavTrap( ScavTrap &src) :
ClapTrap(src._name, 
	src._hp, 
	src._maxHp, 
	src._level, 
	src._meleeAttackDmg, 
	src._rangedAttackDmg, 
	src._armorReduction, 
	src._energy, 
	src._maxEnergy)
{

	std::cout << "ScavTrap instance named " << this->_name << " copied" << std::endl;

}

ScavTrap::~ScavTrap( void ) {

	std::cout << this->_name << ": Oh my God, I'm leaking! I think I'm leaking! Ahhhh!!!" << std::endl;

}

ScavTrap	&ScavTrap::operator=(ScavTrap const &src ) {

	this->_hp = src._hp;
	this->_maxHp = src._maxHp;
	this->_energy = src._energy;
	this->_maxEnergy = src._maxEnergy;
	this->_level = src._level;
	this->_name = src._name;
	this->_meleeAttackDmg = src._meleeAttackDmg;
	this->_rangedAttackDmg = src._rangedAttackDmg;
	this->_armorReduction = src._armorReduction;
	std::cout << "ScavTrap overloaded = operator called" << std::endl;
	return *this;

}
static int		max(int a, int b) {

	if (a > b)
		return a;
	return b;

}

void	ScavTrap::challengeNewcomer(std::string const &target) {

	this->_energy = max(0, this->_energy - 25);
	if (this->_energy == 0) {
		std::cout << this->_name << " does'nt have enough energy to challenge anybody!" << std::endl;
		return;
	}
	int nb = (int)(((float)std::rand() / (float)RAND_MAX) * 4);
	std::cout << this->_name << " challenges " << target << " to " << ScavTrap::_scavTrapChallenges[nb] << std::endl;
	std::cout << "energy remaining: " << this->_energy << std::endl;

}

std::string ScavTrap::_scavTrapChallenges[5] = {
	"win a duel",
	"complete the game",
	"uninstall Borderlands",
	"kill everybody",
	"find a glitch in the matrix"
};
