/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 17:23:55 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/27 17:26:50 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void ) {

	std::string		str("HI THIS IS BRAIN");
	std::string		*strpt = &str;
	std::string&	strref = str;

	std::cout << "str: " << str << " pointer: " << *strpt << " reference: " << strref << std::endl;
	return 0;

}
