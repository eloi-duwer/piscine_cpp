/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 10:57:50 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/30 22:05:46 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

NinjaTrap::NinjaTrap( std::string name ) : ClapTrap(name, 60, 60, 1, 60, 5, 0, 120, 120) {

	std::cout << "Start NinjaTrap bootup sequence. Designation: " << this->_name << std::endl;
	std::srand(std::time(NULL));

}

NinjaTrap::NinjaTrap( NinjaTrap &src) :
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

	std::cout << "NinjaTrap instance named " << this->_name << " copied" << std::endl;

}

NinjaTrap::~NinjaTrap( void ) {

	std::cout << this->_name << ": NinjaTrap instance destroyed. RIP" << std::endl;

}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &src ) {

	this->_hp = src._hp;
	this->_maxHp = src._maxHp;
	this->_energy = src._energy;
	this->_maxEnergy = src._maxEnergy;
	this->_level = src._level;
	this->_name = src._name;
	this->_meleeAttackDmg = src._meleeAttackDmg;
	this->_rangedAttackDmg = src._rangedAttackDmg;
	this->_armorReduction = src._armorReduction;
	std::cout << "NinjaTrap overloaded = operator called" << std::endl;
	return *this;

}

void	NinjaTrap::ninjaShoebox( ClapTrap &target ) {

	std::cout << this->_name << " attacks!" << std::endl;
	target.takeDamage(50);
	std::cout << this->_name << " figured out that it's an ally! He repairs him" << std::endl;
	target.beRepaired(30);

}
void	NinjaTrap::ninjaShoebox( FragTrap &target ) {

	std::cout << "A wild fragTrap attacks " << this->_name << " !!" << std::endl;
	target.vaulthunter_dot_exe(this->_name);
	std::cout << "* " << this->_name << " leaves the battle crying *" << std::endl;

}

void	NinjaTrap::ninjaShoebox( ScavTrap &target ) {

	std::cout << this->_name << " wants to pass through a door, but a ScavTrap is guarding it!" << std::endl;
	target.challengeNewcomer(this->_name);
	std::cout << "Having tried for years, " << this->_name << " fails the challenge" << std::endl;

}

void	NinjaTrap::ninjaShoebox( NinjaTrap &target ) {

	std::cout << this->_name << " meets " << target._name << ", his old friend!" << std::endl;
	std::cout << "They discuss for hours, before contining their path." << std::endl;

}
