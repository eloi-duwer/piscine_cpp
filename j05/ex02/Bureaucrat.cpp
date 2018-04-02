/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 12:55:03 by eduwer            #+#    #+#             */
/*   Updated: 2018/04/02 19:14:16 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>
#include <ostream>

Bureaucrat::Bureaucrat( int grade, std::string name ) : _grade(grade), _name(name) {

	_checkGrade();

}

Bureaucrat::Bureaucrat( Bureaucrat const &src ) {

	*this = src;

}

Bureaucrat::~Bureaucrat( void ) {
	return;
}

Bureaucrat	&Bureaucrat::operator=( Bureaucrat const &src ) {

	_grade = src._grade;
	_checkGrade();
	return *this;

}

void	Bureaucrat::_checkGrade( void ) {

	if (_grade <= 0) {
		_grade = 1;
		throw Bureaucrat::GradeTooHighException();
	}
	if (_grade > 150) {
		_grade = 150;
		throw Bureaucrat::GradeTooLowException();
	}

}

void	Bureaucrat::signForm(Form &form) const {

	try {
		form.beSigned(*this);
		std::cout << *this << " signs " << form << std::endl;
	}
	catch  (std::exception & e) {
		std::cout << *this << " can't sign " << form << " because " << e.what() << std::endl;
	}

}

void	Bureaucrat::executeForm( Form &form ) const {

	try {
		form.execute(*this);
		std::cout << "Bureaucrat " << *this <<" executes " << form << std::endl;
	}
	catch (std::exception & e) {
		std::cout << *this << " can't execute the Form: " << e.what() << std::endl;
	}

}

int		Bureaucrat::getGrade( void ) const {
	return _grade;
}

const std::string &Bureaucrat::getName( void ) const {
	return _name;
}

const char *Bureaucrat::GradeTooHighException::what( void ) const throw() {
	return "The grade is too high, set to the maximum, 1.";
}

const char *Bureaucrat::GradeTooLowException::what( void ) const throw() {
	return "The grade is too low, set to the minimum, 150.";
}

Bureaucrat	&Bureaucrat::operator++( void ) {
	--_grade;
	_checkGrade();
	return *this;
}

Bureaucrat	Bureaucrat::operator++( int nb ) {

	if (nb == 0)
		nb = 1;
	Bureaucrat	ret = *this;
	_grade -= nb;
	_checkGrade();
	return ret;
}

Bureaucrat	&Bureaucrat::operator--( void ) {
	++_grade;
	_checkGrade();
	return *this;
}

Bureaucrat	Bureaucrat::operator--( int nb ) {
	if (nb == 0)
		nb = 1;
	Bureaucrat ret = *this;
	_grade += nb;
	_checkGrade();
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &obj) {

	o << obj.getName() << ", bureauctrat grade " << obj.getGrade();
	return o;
}
