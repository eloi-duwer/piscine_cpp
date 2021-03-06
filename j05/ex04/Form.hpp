/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 14:13:42 by eduwer            #+#    #+#             */
/*   Updated: 2018/04/03 23:17:06 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include <stdexcept>

class Bureaucrat;

class Form {

	private:
		bool		_signed;
		const int	_gradeToSign;
		const int	_gradeToExecute;
		void		testInitExceptions( void );
		virtual void execute( void ) const = 0;

	public:
		Form( int gradeToSign = 150, int gradeToExecute = 150 );
		Form( Form const &src );
		virtual ~Form( void );

		Form	&operator=(Form const &src);

		void	beSigned( Bureaucrat const &bureaucrate );
		bool	isSigned( void ) const ;
		int		getGradeToSign( void ) const ;
		int		getGradeToExecute( void ) const ;

		void	execute(Bureaucrat const &executor) const;

	class GradeTooLowException : public std::exception {

		public:
			GradeTooLowException( std::string exception = "Unknown GradeTooLowException" );
			GradeTooLowException( GradeTooLowException const &src);
			virtual ~GradeTooLowException( void ) _NOEXCEPT;

			GradeTooLowException	&operator=( GradeTooLowException const &src );

			virtual const char *what( void ) const throw();

		private:
			std::string _exception;
	};

	class GradeTooHighException : public std::exception {

		public:
			GradeTooHighException( std::string exception = "Unknown GradeTooHighException" );
			GradeTooHighException( GradeTooHighException const &src );
			virtual ~GradeTooHighException( void ) _NOEXCEPT;

			GradeTooHighException	&operator=( GradeTooHighException const &src );

			virtual const char *what( void ) const throw();

		private:
			std::string _exception;

	};

	class FormNotSignedException : public std::exception {

		public:
			virtual const char *what( void ) const throw();

	};
};

std::ostream	&operator<<(std::ostream &o, Form const &src );

# endif
