/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 17:28:56 by eduwer            #+#    #+#             */
/*   Updated: 2018/04/02 18:25:25 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form {

	public:
		ShrubberyCreationForm( std::string file = "home");
		ShrubberyCreationForm( ShrubberyCreationForm const &src);
		~ShrubberyCreationForm( void );

		virtual void execute( void ) const;

		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &src);

	private:
		std::string _target;

};

# endif
