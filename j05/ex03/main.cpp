/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 13:35:11 by eduwer            #+#    #+#             */
/*   Updated: 2018/04/02 20:29:46 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main( void ) {

	Intern random;

	Bureaucrat	fonctionnaire(140, "Pierre-edouard");
	Bureaucrat	maire(70, "Yves");
	Bureaucrat	donald(1, "Trump");

	std::cout << fonctionnaire << std::endl << maire << std::endl << donald << std::endl;

	Form *dark = random.makeForm("presidential pardon request", "Dark Vador");
	Form *house = random.makeForm("shrubbery request", "My home");
	Form *robot = random.makeForm("robotomy request", "Wall-e");

	fonctionnaire.signForm(*dark);
	maire.executeForm(*dark);
	donald.executeForm(*house);
	donald.executeForm(*dark);
	fonctionnaire.signForm(*house);
	fonctionnaire.executeForm(*house);
	maire.executeForm(*house);
	maire.signForm(*robot);
	maire.executeForm(*robot);
	donald.executeForm(*robot);

	std::cout << random.makeForm("nothing", "nobody") << std::endl;
	delete dark;
	delete house;
	delete robot;
	return 0;
}
