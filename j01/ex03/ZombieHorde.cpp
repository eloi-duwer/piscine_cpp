/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:02:06 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/27 16:47:01 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

std::string	randomName( void ) {

	std::string name("");
	char	letter;
	int		nb;
	int		i;

	i = 0;
	while (i < 6) {
		nb = (int)(((float)std::rand() / (float)RAND_MAX) * 25);
		letter = nb + 97;
		name += letter;
		++i;;
	}
	return name;
}
