/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 13:35:11 by eduwer            #+#    #+#             */
/*   Updated: 2018/04/02 19:57:25 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void ) {

	Bureaucrat	fonctionnaire(140, "Pierre-edouard");
	Bureaucrat	maire(70, "Yves");
	Bureaucrat	donald(1, "Trump");

	std::cout << fonctionnaire << std::endl << maire << std::endl << donald << std::endl;

	PresidentialPardonForm dark("Dark Vador");
	ShrubberyCreationForm house("My home");
	RobotomyRequestForm robot("Wall-e");

	fonctionnaire.signForm(dark);
	maire.executeForm(dark);
	donald.executeForm(house);
	donald.executeForm(dark);
	fonctionnaire.signForm(house);
	fonctionnaire.executeForm(house);
	maire.executeForm(house);
	maire.signForm(robot);
	maire.executeForm(robot);
	donald.executeForm(robot);

	Form *test = new PresidentialPardonForm("someone");
	try {
		test->Form::execute(donald);
	}
	catch (Form::FormNotSignedException &e) {
		std::exception a(e);
		Form::FormNotSignedException b;
		b = e;
		std::cout << b.what() << std::endl;
	}
	donald.signForm(*test);
	donald.executeForm(*test);
	delete test;
	return 0;
}
