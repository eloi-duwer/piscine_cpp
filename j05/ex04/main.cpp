/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 13:35:11 by eduwer            #+#    #+#             */
/*   Updated: 2018/04/03 23:52:54 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int main( void ) {

	Intern random;

	Bureaucrat	fonctionnaire(140, "Pierre-edouard");
	Bureaucrat	maire(70, "Yves");
	Bureaucrat	donald(1, "Trump");

	OfficeBlock ob;

	ob.setIntern(&random);
	ob.setSigner(&fonctionnaire);
	ob.setExecutor(&donald);

	ob.doBureaucracy("nothing", NULL);
	return 0;
}
