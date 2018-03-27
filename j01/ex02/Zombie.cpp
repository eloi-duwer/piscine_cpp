/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:43:12 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/27 16:47:53 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( std::string name, std::string type): _name(name), _type(type) {

	std::cout << "Zombie " << this->_name << " type " << this->_type << " created." << std::endl;

}

Zombie::~Zombie( void ) {

		std::cout << "Zombie " << this->_name << " type " << this->_type << " destroyed." << std::endl;

}

void	Zombie::announce( void ) const {

	std::cout << "<" << this->_name << "(" << this->_type << ")> Braiiiiiiiiiiiiiiins" << std::endl;

}
