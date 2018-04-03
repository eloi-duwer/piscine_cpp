/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 20:47:52 by eduwer            #+#    #+#             */
/*   Updated: 2018/04/03 23:24:15 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

#include <string>

class OfficeBlock {

	public:
		OfficeBlock( Intern *inter, Bureaucrat *signingBureaucrat, Bureaucrat *executingBureaucrat);
		OfficeBlock( void );
		virtual ~OfficeBlock( void );

		void	doBureaucracy(std::string formName, std::string targetName);
		void	setIntern( Intern *intern );
		void	setSigner( Bureaucrat *signingBureaucrat );
		void	setExecutor( Bureaucrat *executingBureaucrat );

		class	PostMissingException : public std::exception {

			public:
				PostMissingException( std::string exception = "One post is missing" );
				PostMissingException( PostMissingException const &src );
				virtual ~PostMissingException( void ) _NOEXCEPT;

				PostMissingException	&operator=( PostMissingException const &src );

				virtual const char *what( void ) const throw();

			private:
				std::string _exception;

		};

	private:
		Intern		*_intern;
		Bureaucrat	*_signingBureaucrat;
		Bureaucrat	*_executingBureaucrat;

};
