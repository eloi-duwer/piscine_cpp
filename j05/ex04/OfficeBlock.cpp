/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 20:56:22 by eduwer            #+#    #+#             */
/*   Updated: 2018/04/03 23:38:24 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"
#include <stdexcept>

OfficeBlock::OfficeBlock( Intern *intern, Bureaucrat *sign, Bureaucrat *exec) :
_intern(intern),
_signingBureaucrat(sign),
_executingBureaucrat(exec) {}

OfficeBlock::OfficeBlock( void ) :
_intern(NULL),
_signingBureaucrat(NULL),
_executingBureaucrat(NULL) {}

OfficeBlock::~OfficeBlock( void ) {};

void	OfficeBlock::setIntern( Intern *intern ) {
	_intern = intern;
}

void	OfficeBlock::setSigner( Bureaucrat *Bureaucrat ) {
	_signingBureaucrat = Bureaucrat;
}

void	OfficeBlock::setExecutor( Bureaucrat *Bureaucrat) {
	_executingBureaucrat = Bureaucrat;
}

void	OfficeBlock::doBureaucracy(std::string formName, std::string targetName) {

	if (_intern == NULL)
		throw OfficeBlock::PostMissingException("The intern is missing");
	if (_signingBureaucrat == NULL)
		throw OfficeBlock::PostMissingException("The signing bureaucrat is missing");
	if (_executingBureaucrat == NULL)
		throw OfficeBlock::PostMissingException("The executing bureaucrat is missing");
	Form *form = NULL;
	try {
		form = _intern->makeForm(formName, targetName);
		_signingBureaucrat->signForm(*form);
		_executingBureaucrat->executeForm(*form);
		delete form;
	}
	catch ( std::exception &e) {
		std::cout << "The Office Block had a problem, reason:" << std::endl;
		std::cout << e.what() << std::endl;
		if (form != NULL)
			delete form;
	}

}

OfficeBlock::PostMissingException::PostMissingException( std::string exc) : _exception(exc) {}

OfficeBlock::PostMissingException::PostMissingException( OfficeBlock::PostMissingException const &src ) : _exception(src._exception) {};

OfficeBlock::PostMissingException::~PostMissingException( void ) _NOEXCEPT {}

OfficeBlock::PostMissingException	&OfficeBlock::PostMissingException::operator=( OfficeBlock::PostMissingException const &src) {
	_exception = src._exception;
	return *this;
}

const char	*OfficeBlock::PostMissingException::what( void ) const throw() {
	return _exception.c_str();
}
