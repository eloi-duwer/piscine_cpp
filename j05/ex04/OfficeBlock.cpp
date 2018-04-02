/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 20:56:22 by eduwer            #+#    #+#             */
/*   Updated: 2018/04/02 21:08:50 by eduwer           ###   ########.fr       */
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

void	doBureaucracy(std::string formName, std::string targetName) {



}
