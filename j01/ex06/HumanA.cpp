/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 19:01:39 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/27 19:07:07 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(weapon) {

	std::cout << "Human A name " << this->_name << " weapon type " << \
		this->_weapon.getType() << " created" << std::endl;

}

HumanA::~HumanA( void ) {

		std::cout << "Human A name " << this->_name << " weapon type " << \
		this->_weapon.getType() << " destroyed" << std::endl;

}

void	HumanA::attack( void ) {

	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;

}
