/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 17:28:56 by eduwer            #+#    #+#             */
/*   Updated: 2018/04/02 19:25:32 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form {

	public:
		PresidentialPardonForm( std::string file = "anybody");
		PresidentialPardonForm( PresidentialPardonForm const &src);
		~PresidentialPardonForm( void );

		PresidentialPardonForm	&operator=(PresidentialPardonForm	const &src);

		virtual void execute( void ) const ;

	private:
		std::string _target;
};

# endif
