/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 14:13:42 by eduwer            #+#    #+#             */
/*   Updated: 2018/04/02 16:05:47 by eduwer           ###   ########.fr       */
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

	public:
		Form( int gradeToSign = 150, int gradeToExecute = 150 );
		Form( Form const &src );
		~Form( void );

		Form	&operator=(Form const &src);

		void	beSigned( Bureaucrat const &bureaucrate );
		bool	isSigned( void ) const ;
		int		getGradeToSign( void ) const ;
		int		getGradeToExecute( void ) const ;

	class GradeTooLowException : public std::exception {

		public:
			GradeTooLowException( std::string exception = "Unknown GradeTooLowException" );
			GradeTooLowException( GradeTooLowException const &src);
			~GradeTooLowException( void ) _NOEXCEPT;

			GradeTooLowException	&operator=( GradeTooLowException const &src );

			virtual const char *what( void ) const throw();

		private:
			std::string _exception;
	};

	class GradeTooHighException : public std::exception {

		public:
			GradeTooHighException( std::string exception = "Unknown GradeTooHighException" );
			GradeTooHighException( GradeTooHighException const &src );
			~GradeTooHighException( void ) _NOEXCEPT;

			GradeTooHighException	&operator=( GradeTooHighException const &src );

			virtual const char *what( void ) const throw();

		private:
			std::string _exception;

	};



	private:
		bool		_signed;
		const int	_gradeToSign;
		const int	_gradeToExecute;
		void		testInitExceptions( void );
};

std::ostream	&operator<<(std::ostream &o, Form const &src );

# endif
