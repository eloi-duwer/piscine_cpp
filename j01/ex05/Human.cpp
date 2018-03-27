/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 17:54:10 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/27 18:19:30 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"
#include <iostream>

Human::Human(): _brain(Brain()), _brainRef(this->_brain) {

}

Human::~Human() {

}

std::string		Human::identify( void ) {

	return this->_brain.identify();

}

const Brain		&Human::getBrain( void ) {

	return this->_brainRef;

}
