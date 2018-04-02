/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 20:06:32 by eduwer            #+#    #+#             */
/*   Updated: 2018/04/02 20:21:55 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern( void ) {
	_formNames[0] = "robotomy request";
	_formNames[1] = "presidential pardon request";
	_formNames[2] = "shrubbery request";
}
Intern::Intern( Intern const &src ){ *this = src; }
Intern::~Intern( void ) {};

Intern &Intern::operator=( Intern const &src ) {
	this->_formNames[0] = src._formNames[0];
	this->_formNames[1] = src._formNames[1];
	this->_formNames[2] = src._formNames[2];
	return *this;
}

Form *Intern::makeForm(std::string const &form, std::string const &target) const {

	Form *formulaire = NULL;

	if (form.compare(_formNames[0]) == 0)
		formulaire = new RobotomyRequestForm(target);
	else if (form.compare(_formNames[1]) == 0)
		formulaire = new PresidentialPardonForm(target);
	else if (form.compare(_formNames[2]) == 0)
		formulaire = new ShrubberyCreationForm(target);
	if (formulaire == NULL)
		std::cout << "No matching form request name: " << form << std::endl;
	else
		std::cout << "Intern creates " << form << " Form (" << *formulaire << ")" << std::endl;
	return formulaire;

}
