/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 17:40:40 by eduwer            #+#    #+#             */
/*   Updated: 2018/04/02 19:35:32 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form(145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &src ) : Form(145, 137), _target(src._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src) {

	_target = src._target;
	return *this;

}

void	ShrubberyCreationForm::execute( void ) const {

	std::ofstream file;
	file.open((_target + "_shrubbery").c_str());
	int i = 0;
	while ( i < 3) {
		file << "      _-_" << std::endl;
		file << "   /~~   ~~\\" << std::endl;
		file << "/~~         ~~\\" << std::endl;
		file << " {               }" << std::endl;
		file << "  \\  _-     -_  /" << std::endl;
		file << "    ~  \\\\ //  ~" << std::endl;
		file << " _- -   | | _- _" << std::endl;
		file << "   _ -  | |   -_" << std::endl;
		file << "       // \\\\" << std::endl << std::endl;
		++i;
	}
	file.close();
}
