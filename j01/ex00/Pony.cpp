/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:07:57 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/27 15:23:28 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony( int weight ) : _weight(weight) {

	std::cout << "Pony instance created, weight: " << this->_weight << " Kg" << std::endl;

}

Pony::~Pony( void ) {
	std::cout << "A pony who weighted " << this->_weight << " Kg has been destroyed, what a terrible day." << std::endl;
}

void	Pony::eatGrass( int kilosOfGrass ) {

	if (kilosOfGrass < 0 ) {
		std::cout << "A pony can't eat a negative amount of grass!!" << std::endl;
		return;
	}
	std::cout << "The pony who weighted " << this->_weight << " Kg ate " << kilosOfGrass << " Kg of grass, he now weights ";
	this->_weight += kilosOfGrass;
	std::cout << this->_weight << " Kg." << std::endl;

}

void	Pony::runAround( int kilosLost ) {
	std::cout << "The pony who weighted " << this->_weight << " Kg ran around and lost " << kilosLost << " Kg, he now weights ";
	this->_weight -= kilosLost;
	std::cout << this->_weight << " Kg.";
	if (kilosLost < 0)
		std::cout << "(It seems that he ate some grass during the travel)";
	std::cout << std::endl;
}
