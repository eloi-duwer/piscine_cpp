/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 20:47:52 by eduwer            #+#    #+#             */
/*   Updated: 2018/04/02 21:09:00 by eduwer           ###   ########.fr       */
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

	private:
		Intern		*_intern;
		Bureaucrat	*_signingBureaucrat;
		Bureaucrat	*_executingBureaucrat;

};
