/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:43:12 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/27 17:15:39 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>

std::string	randomName( void ) {

	std::string name("");
	char	letter;
	int		nb;
	int		i;

	i = 0;
	while (i < 6) {
		nb = (int)(((float)std::rand() / (float)RAND_MAX) * 25);
		letter = nb + 97;
		name += letter;
		++i;;
	}
	return name;
}

Zombie::Zombie( std::string name, std::string type): _name(name), _type(type) {

	std::cout << "Zombie " << this->_name << " type " << this->_type << " created." << std::endl;

}

Zombie::Zombie( void ) : _type(std::string("group")) {
	this->_name = randomName();
	std::cout << "Zombie " << this->_name << " type " << this->_type << " created." << std::endl;
}

Zombie::~Zombie( void ) {

		std::cout << "Zombie " << this->_name << " type " << this->_type << " destroyed." << std::endl;

}

void	Zombie::announce( void ) const {

	std::cout << "<" << this->_name << "(" << this->_type << ")> Braiiiiiiiiiiiiiiins" << std::endl;

}
