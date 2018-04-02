/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 17:40:40 by eduwer            #+#    #+#             */
/*   Updated: 2018/04/02 19:33:35 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form(145, 137), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &src ) : Form(145, 137), _target(src._target) {}

PresidentialPardonForm::~PresidentialPardonForm( void ) {}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &src) {

	_target = src._target;
	return *this;

}

void	PresidentialPardonForm::execute( void ) const {
	std::cout << "Zaphod Beeblebrox" << " has pardonned " << _target << std::endl;
}
