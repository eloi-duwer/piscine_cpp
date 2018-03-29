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

FragTrap::FragTrap( std::string name ) : ClapTrap(name, 100, 100, 1, 30, 20, 5, 100, 100) {

	std::cout << "Hello! I am your new FragTrap bot. Designation: " << this->_name << std::endl;
	std::srand(std::time(NULL));

}

FragTrap::FragTrap( FragTrap &src) : ClapTrap(src._name, src._hp, src._maxHp, src._level, src._meleeAttackDmg, src._rangedAttackDmg, src._armorReduction, src._energy, src._maxEnergy) {

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

static int		max(int a, int b) {

	if (a > b)
		return a;
	return b;

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
