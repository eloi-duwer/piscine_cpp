/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 20:01:59 by eduwer            #+#    #+#             */
/*   Updated: 2018/04/03 23:47:29 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include <string>
#include <iostream>

class Intern {

	public:
		Intern( void );
		Intern( Intern const &src );
		virtual ~Intern( void );

		Intern &operator=(Intern const &src);

		Form *makeForm(std::string const &form, std::string const &target) const;

		class NoMatchingRequestForm : public std::exception {
			public:
				virtual const char *what( void ) const throw();
		};

	private:
		std::string _formNames[3];

};

# endif
