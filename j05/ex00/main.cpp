/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 13:35:11 by eduwer            #+#    #+#             */
/*   Updated: 2018/04/02 19:38:51 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <ctime>
#include <cstdlib>

int main( void ) {

	Bureaucrat bob(150, "BoB");
	try {
		Bureaucrat donald(-1, "Trump");
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << bob;
	
	Bureaucrat federer(20);
	try {
		std::cout << federer;
		federer.operator++(19);
		std::cout << federer;
		federer++;
		std::cout << "Never printed" << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
		std::cout << federer;
	}

	Bureaucrat random(150, "random guy");
	std::cout << random;
	try {
		--random;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
		std::exception e2 = e;
	}
	std::cout << random;

	try {
		random.operator++(150);
	}
	catch (Bureaucrat::GradeTooHighException & e) {

		Bureaucrat::GradeTooHighException e2(e);
		Bureaucrat::GradeTooHighException e3 = e;
		Bureaucrat::GradeTooHighException e4;

		std::cout << e3.what() << std::endl;
	}

	Bureaucrat test(75, "test");
	srand(time(NULL));
	std::cout << test;
	try {
		while (1) {
			int nb = rand() % 100 - 50;
			std::cout << "Going to add " << nb << std::endl;
			test.operator++(nb);
			std::cout << test;
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl << test;
	}

	Bureaucrat	test1(15, "Boby");
	Bureaucrat	test2;

	test2 = test1;

	Bureaucrat test3(test1);

	return 0;
}
