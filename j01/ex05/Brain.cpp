/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 17:35:31 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/27 18:23:19 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <string>
#include <sstream>


Brain::Brain( void ): _QI(100), _numberOfNeurons(std::string("To many")) {

	std::cout << "Brain instance created" << std::endl;

}

Brain::~Brain( void ) {

	std::cout << "Brain instance destroyed" << std::endl;

}

int		Brain::getQI( void ) const {

	return this->_QI;

}

std::string		Brain::identify( void ) const {

	std::stringstream stream;

	stream << this;
	return stream.str();

}
