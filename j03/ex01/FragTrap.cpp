/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 10:57:50 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/29 14:04:11 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

FragTrap::FragTrap( std::string name ) :
_hp(100),
_maxHp(100),
_energy(100),
_maxEnergy(100),
_level(1),
_name(name),
_meleeAttackDmg(30),
_rangedAttackDmg(20),
_armorReduction(5) {

	std::cout << "Hello! I am your new steward bot. Designation: " << this->_name << std::endl;
	std::srand(std::time(NULL));

}

FragTrap::FragTrap( FragTrap &src) :
_hp(src._hp),
_maxHp(src._maxHp),
_energy(src._energy),
_maxEnergy(src._maxEnergy),
_level(src._level),
_name(src._name),
_meleeAttackDmg(src._meleeAttackDmg),
_rangedAttackDmg(src._rangedAttackDmg),
_armorReduction(src._armorReduction) {

	std::cout << "FragTrap instance named " << this->_name << " copied" << std::endl;

}

FragTrap::~FragTrap( void ) {

	std::cout << this->_name << " I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;

}

FragTrap	&FragTrap::operator=(FragTrap const &src ) {

	this->_hp = src._hp;
	this->_maxHp = src._maxHp;
	this->_energy = src._energy;
	this->_maxEnergy = src._maxEnergy;
	this->_level = src._level;
	this->_name = src._name;
	this->_meleeAttackDmg = src._meleeAttackDmg;
	this->_rangedAttackDmg = src._rangedAttackDmg;
	this->_armorReduction = src._armorReduction;
	std::cout << "FragTrap overloaded = operator called" << std::endl;
	return *this;

}

void	FragTrap::rangedAttack( std::string const &target ) {

	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDmg << " points of damage!" << std::endl;

}

void	FragTrap::meleeAttack( std::string const &target ) {

	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttackDmg << " points of damage!" << std::endl;

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

void	FragTrap::takeDamage( unsigned int amount ) {

	int actualAmout = max(0, amount - this->_armorReduction);
	this->_hp = max(0, this->_hp - actualAmout);
	std::cout << "FR4G-TP " << this->_name << " took " << actualAmout << " damage,  " << this->_hp << " hp remaining" << std::endl;

}

void	FragTrap::beRepaired( unsigned int amount ) {

	this->_hp = min(this->_maxHp, this->_hp + amount);
	std::cout << "FR4G-TP " << this->_name << " repaired, " << this->_hp << " hp remaining" << std::endl;

}

void	FragTrap::vaulthunter_dot_exe(std::string const &target) {

	this->_energy = max(0, this->_energy - 25);
	if (this->_energy == 0) {
		std::cout << this->_name << ": I don't have enough energy to lauch my Vaulthunter!" << std::endl;
		return;
	}
	int nb = (int)(((float)std::rand() / (float)RAND_MAX) * 4);
	std::cout << this->_name << " Vaulthunter's attacks " << target << " with " << FragTrap::_vaulthunterAttacks[nb] << std::endl;
	std::cout << "energy remaining: " << this->_energy << std::endl;

}

std::string FragTrap::_vaulthunterAttacks[5] = {
	"a disco ball firing lasers",
	"two very big guns",
	"some dark magic",
	"a baseball bat",
	"a nuclear missile"
};
