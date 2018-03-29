/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 10:57:50 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/29 14:04:11 by eduwer           ###   ########.fr       */
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
static int		max(int a, int b) {

	if (a > b)
		return a;
	return b;

}


