/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 12:51:24 by eduwer            #+#    #+#             */
/*   Updated: 2018/04/03 23:16:36 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "Form.hpp"
#include <string>
#include <iostream>
#include <stdexcept>

class Form;

class Bureaucrat {

	public:
		Bureaucrat( int grade = 150, std::string name = "Roger" );
		Bureaucrat( Bureaucrat const &src );
		virtual ~Bureaucrat( void );

		Bureaucrat	&operator=( Bureaucrat const &src );
		Bureaucrat	&operator++( void );
		Bureaucrat	operator++( int nb );
		Bureaucrat	&operator--( void );
		Bureaucrat	operator--( int nb );

		int					getGrade( void ) const;
		const std::string	&getName( void ) const;
		void				signForm( Form &form ) const;
		void				executeForm( Form &form ) const;

		class GradeTooHighException : public std::exception {

			public:
				virtual const char *what( void ) const throw();

		};

		class GradeTooLowException : public std::exception {

			public:
				virtual const char *what( void ) const throw();

		};
	private:
		void				_checkGrade( void );
		int					_grade;
		std::string	const	_name;

};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &obj );

# endif
