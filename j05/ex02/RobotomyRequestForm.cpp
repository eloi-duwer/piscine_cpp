/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 17:40:40 by eduwer            #+#    #+#             */
/*   Updated: 2018/04/02 18:44:24 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form(145, 137), _target(target) {

	srand(time(NULL));

}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &src ) : Form(145, 137), _target(src._target) {}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &src) {

	_target = src._target;
	return *this;

}

void	RobotomyRequestForm::execute( void ) const {

	std::cout << "BrrrrrrrrrrrrrRRRRRRRbBRBRBRRRRRRRR" << std::endl;
	std::cout << "CCCCCCRAAAAAAAC" << std::endl;
	std::cout << "* someone screams *" << std::endl;
	if (rand() % 2)
		std::cout << "Critical failure of the robotization" << std::endl;
	else
		std::cout << "Target " << _target << " successfuly robotized" << std::endl;

}
