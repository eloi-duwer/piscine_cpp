/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 17:28:56 by eduwer            #+#    #+#             */
/*   Updated: 2018/04/02 18:31:50 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form {

	public:
		RobotomyRequestForm( std::string file = "home");
		RobotomyRequestForm( RobotomyRequestForm const &src);
		~RobotomyRequestForm( void );

		RobotomyRequestForm	&operator=( RobotomyRequestForm const &src );

		virtual void execute( void ) const;

	private:
		std::string _target;
};

# endif
