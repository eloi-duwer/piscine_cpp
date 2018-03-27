/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:37:06 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/27 19:17:45 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>
#include <iostream>

Weapon::Weapon( std::string str) : type(str) {

	std::cout << "Weapon instance created with " << this->type << " type" << std::endl;

}

Weapon::~Weapon( void ) {

	std::cout << "Weapon instance with " << this->type << " type destroyed" << std::endl;

}

void	Weapon::setType( std::string type ) {

	std::cout << "Weapon type changed from " << this->type;
	this->type = type;
	std::cout << " to " << this->type << std::endl;

}

const std::string	&Weapon::getType( void ) {

	return this->type;

}
