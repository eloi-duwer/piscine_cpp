/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 10:57:50 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/30 22:33:23 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

ClapTrap::ClapTrap( std::string name, int hp, int maxHp, int level, int meleeAttackDmg, int rangedAttackDmg, int armorReduction, int energy, int maxEnergy ) :
_hp(hp),
_maxHp(maxHp),
_level(level),
_name(name),
_meleeAttackDmg(meleeAttackDmg),
_rangedAttackDmg(rangedAttackDmg),
_armorReduction(armorReduction),
_energy(energy),
_maxEnergy(maxEnergy)
{

	std::cout << "ClapTrap instance created: " << this->_name << std::endl;
	std::srand(std::time(NULL));

}

ClapTrap::ClapTrap( ClapTrap &src) :
_hp(src._hp),
_maxHp(src._maxHp),
_level(src._level),
_name(src._name),
_meleeAttackDmg(src._meleeAttackDmg),
_rangedAttackDmg(src._rangedAttackDmg),
_armorReduction(src._armorReduction),
_energy(src._energy),
_maxEnergy(src._maxEnergy) {

	std::cout << "ClapTrap instance named " << this->_name << " copied" << std::endl;

}

ClapTrap::~ClapTrap( void ) {

	std::cout << this->_name << ": ClapTrap instance destroyed" << std::endl;

}
/*
ClapTrap	&ClapTrap::operator=(ClapTrap const &src ) {

	this->_hp = src._hp;
	this->_maxHp = src._maxHp;
	this->_energy = src._energy;
	this->_maxEnergy = src._maxEnergy;
	this->_level = src._level;
	this->_name = src._name;
	this->_meleeAttackDmg = src._meleeAttackDmg;
	this->_rangedAttackDmg = src._rangedAttackDmg;
	this->_armorReduction = src._armorReduction;
	std::cout << "ClapTrap overloaded = operator called" << std::endl;
	return *this;

}
*/
void	ClapTrap::rangedAttack( std::string const &target ) {

	std::cout << "CL4P-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDmg << " points of damage!" << std::endl;

}

void	ClapTrap::meleeAttack( std::string const &target ) {

	std::cout << "CL4P-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttackDmg << " points of damage!" << std::endl;

}

static int		min(int a, int b) {

	if (a < b)
		return a;
	return b;
}

static int		max(int a, int b) {

	if (a > b)
		return a;
	return b;

}

void	ClapTrap::takeDamage( unsigned int amount ) {

	int actualAmout = max(0, amount - this->_armorReduction);
	this->_hp = max(0, this->_hp - actualAmout);
	std::cout << "CL4P-TP " << this->_name << " took " << actualAmout << " damage,  " << this->_hp << " hp remaining" << std::endl;

}

void	ClapTrap::beRepaired( unsigned int amount ) {

	this->_hp = min(this->_maxHp, this->_hp + amount);
	std::cout << "CL4P-TP " << this->_name << " repaired, " << this->_hp << " hp remaining" << std::endl;

}
