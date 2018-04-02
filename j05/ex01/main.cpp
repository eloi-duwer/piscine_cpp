/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 13:35:11 by eduwer            #+#    #+#             */
/*   Updated: 2018/04/02 16:12:43 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void ) {

	Bureaucrat	fonctionnaire(150, "Pierre-edouard");
	std::cout << fonctionnaire << std::endl;
	Form		laissez_passerA38(100, 100);
	std::cout << laissez_passerA38 << std::endl;

	fonctionnaire.signForm(laissez_passerA38);
	std::cout << laissez_passerA38 <<std::endl;

	fonctionnaire.operator++(100);
	std::cout << fonctionnaire << std::endl;
	fonctionnaire.signForm(laissez_passerA38);
	std::cout << laissez_passerA38 << std::endl;

	try {
	Form erreur1(-1, 100);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try {
	Form erreur2(200, 100);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
	Form erreur3(100, -1);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
	Form erreur4(100, 200);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
