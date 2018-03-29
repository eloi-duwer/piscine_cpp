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

ScavTrap::ScavTrap( std::string name ) :
_hp(100),
_maxHp(100),
_energy(50),
_maxEnergy(50),
_level(1),
_name(name),
_meleeAttackDmg(20),
_rangedAttackDmg(15),
_armorReduction(3) {

	std::cout << "Start bootup sequance. Designation: " << this->_name << std::endl;
	std::srand(std::time(NULL));

}

ScavTrap::ScavTrap( ScavTrap &src) :
_hp(src._hp),
_maxHp(src._maxHp),
_energy(src._energy),
_maxEnergy(src._maxEnergy),
_level(src._level),
_name(src._name),
_meleeAttackDmg(src._meleeAttackDmg),
_rangedAttackDmg(src._rangedAttackDmg),
_armorReduction(src._armorReduction) {

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

void	ScavTrap::rangedAttack( std::string const &target ) {

	std::cout << "SC4V-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDmg << " points of damage!" << std::endl;

}

void	ScavTrap::meleeAttack( std::string const &target ) {

	std::cout << "SC4V-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttackDmg << " points of damage!" << std::endl;

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

void	ScavTrap::takeDamage( unsigned int amount ) {

	int actualAmout = max(0, amount - this->_armorReduction);
	this->_hp = max(0, this->_hp - actualAmout);
	std::cout << "SC4V-TP " << this->_name << " took " << actualAmout << " damage,  " << this->_hp << " hp remaining" << std::endl;

}

void	ScavTrap::beRepaired( unsigned int amount ) {

	this->_hp = min(this->_maxHp, this->_hp + amount);
	std::cout << "SC4V-TP " << this->_name << " repaired, " << this->_hp << " hp remaining" << std::endl;

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
