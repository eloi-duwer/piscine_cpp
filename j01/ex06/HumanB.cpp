/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 19:01:39 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/27 19:19:30 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB( std::string name) : _name(name) {

	std::cout << "Human B name " << this->_name << " created" << std::endl;

}

HumanB::~HumanB( void ) {

		std::cout << "Human B name " << this->_name << " weapon type " << \
		this->_weapon->getType() << " destroyed" << std::endl;

}

void	HumanB::attack( void ) {

	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;

}

void	HumanB::setWeapon (Weapon &weapon) {

	this->_weapon = &weapon;
	std::cout << "Human B " << this->_name << " has now a new weapon named " << this->_weapon->getType() << std::endl;

}
