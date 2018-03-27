/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:47:43 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/27 16:40:43 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIEHORDE_HPP_
# define _ZOMBIEHORDE_HPP_

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde {
	public:
		ZombieHorde( int N );
		~ZombieHorde();

	private:
		Zombie *_zombies;
};

# endif
