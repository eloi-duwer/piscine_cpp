/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 14:40:40 by eduwer            #+#    #+#             */
/*   Updated: 2018/04/02 18:25:51 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( int gradeToSign, int gradeToExecute ) :
_signed(false),
_gradeToSign(gradeToSign),
_gradeToExecute(gradeToExecute) {

	testInitExceptions();

}

Form::Form( Form const &src ) : \
_gradeToSign(src._gradeToSign), \
_gradeToExecute(src._gradeToExecute) {

	*this = src;
	testInitExceptions();

}

Form::~Form( void ) {}

Form	&Form::operator=( Form const &src ) {

	_signed = src._signed;
	return *this;

}

void	Form::testInitExceptions( void ) {

	if (_gradeToSign <= 0)
		throw Form::GradeTooHighException("Grade to sign is too high");
	if (_gradeToSign > 150)
		throw Form::GradeTooLowException("Grade to sign is too low");
	if (_gradeToExecute <= 0)
		throw Form::GradeTooHighException("Grade to execute is too high");
	if (_gradeToExecute > 150)
		throw Form::GradeTooLowException("Grade to execute is too low");

}

bool	Form::isSigned( void ) const {
	return _signed;
}

int		Form::getGradeToSign( void ) const {
	return _gradeToSign;
}

int		Form::getGradeToExecute( void ) const {
	return _gradeToExecute;
}

const char *Form::GradeTooHighException::what() const throw() {
	return _exception.c_str();
}

const char *Form::GradeTooLowException::what() const throw() {
	return _exception.c_str();
}

const char *Form::FormNotSignedException::what( void ) const throw() {
	return ("the form is not signed");
}

void	Form::beSigned( Bureaucrat const &bureaucrate ) {
	if (bureaucrate.getGrade() > _gradeToSign)
		throw Form::GradeTooLowException("The Bureaucrat's grade is not high enough to sign the Form");
	_signed = true;
}

std::ostream &operator<<(std::ostream &o, Form const &src ) {

	o << "Form: signed : " << (src.isSigned() ? "true" : "false") << ", grade to sign: " << src.getGradeToSign() << ", grade to execute: " << src.getGradeToExecute();
	return o;

}

Form::GradeTooHighException::GradeTooHighException( std::string exception) : _exception(exception){}

Form::GradeTooHighException::GradeTooHighException( Form::GradeTooHighException const &src ) : \
_exception(src._exception) {}

Form::GradeTooLowException::GradeTooLowException(std::string exception) : _exception(exception){}

Form::GradeTooLowException::GradeTooLowException( Form::GradeTooLowException const &src ) : \
_exception(src._exception) {}

Form::GradeTooHighException::~GradeTooHighException( void ) _NOEXCEPT{}

Form::GradeTooLowException::~GradeTooLowException( void ) _NOEXCEPT {}

Form::GradeTooHighException	&Form::GradeTooHighException::operator=(Form::GradeTooHighException const &src) {
	_exception = src._exception;
	return *this;
}

Form::GradeTooLowException	&Form::GradeTooLowException::operator=(Form::GradeTooLowException const &src) {
	_exception = src._exception;
	return *this;
}

void	Form::execute(Bureaucrat const &target ) const {

	if (!_signed)
		throw Form::FormNotSignedException();
	if (target.getGrade() > _gradeToExecute)
		throw Form::GradeTooLowException("The grade of the Bureaucrat is too low to execute this Form");
	execute();

}
